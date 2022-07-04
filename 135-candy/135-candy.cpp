class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int>can(n,1);
        vector<int>cann(n,1);
        for(int i=1;i<n;i++){
            if(ratings[i] > ratings[i-1]){
                can[i] = can[i-1] + 1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i] > ratings[i+1]){
                cann[i] = cann[i+1] + 1;
            }
        }
        int sum  = 0 ;
        for(int i=0;i<n;i++){
            sum += max(can[i],cann[i]);
        }
        return sum;
    }
};