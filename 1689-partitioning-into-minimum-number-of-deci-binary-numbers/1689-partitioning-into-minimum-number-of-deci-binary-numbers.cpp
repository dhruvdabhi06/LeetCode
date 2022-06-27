class Solution {
public:
    int minPartitions(string n) {
        int ans = INT_MIN;
        for(auto x : n){
            if(x > ans) ans = x;
        }
        ans = ans - '0';
        return ans;
    }
};