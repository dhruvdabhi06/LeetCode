class Solution {
public:
    
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1 ;
        vector<int>dp(3,0);
        for(int i=0;i<=n;i++){
            if(i==0) dp[0] = 0;
            else if(i == 1) dp[1] = 1;
            else{
                dp[2] = dp[0] + dp[1];
                dp[0] = dp[1];
                dp[1] = dp[2];
            }
        }
        return dp[2];
    }
};