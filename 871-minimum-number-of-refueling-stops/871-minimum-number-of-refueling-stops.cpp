class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n = stations.size();

        vector<long long int>dp(n+1,0);
        dp[0] = startFuel;
        for(int i=0;i<n;i++){
            for(int refill = i ; refill >= 0 && dp[refill] >= stations[i][0]; refill--){
                dp[refill+1] = max(dp[refill+1], dp[refill] + stations[i][1]);
            }
        }
        for(int i=0; i<=n;i++){
            if(dp[i] >= target)
                return i;
        }
        
        return -1;
        
    }
};