class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        if(courses.size() <= 0) return 0 ;
        sort(courses.begin(),courses.end(), [](const vector<int>&a,vector<int>&b){
           return a[1] < b[1]; 
        });
        int sum = 0 ;
        priority_queue<int>que;
        for(auto x : courses){
            sum += x[0];
            que.push(x[0]);
            if(sum > x[1]){
                sum -= que.top();
                que.pop();
            }
        }
        return que.size();
    }
};