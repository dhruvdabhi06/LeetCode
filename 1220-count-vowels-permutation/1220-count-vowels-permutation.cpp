int mod = 1e9+7;
class Solution {
public:
    
    int solve(int prev,int count,vector<vector<int>>&dp,int &n){
        if(count == n ) return 1 ;
        int ans = 0 ;
        if(dp[count][prev] != -1) return dp[count][prev];
        for(int i=1;i<6;i++){
            if(prev == 1 && i == 2){
                ans =( ans%mod + solve(i,count+1,dp,n)%mod)%mod;
            }else if(prev == 2 && (i==1 || i == 3)){
               ans =( ans%mod + solve(i,count+1,dp,n)%mod)%mod;
            }else if(prev == 3 && (i != 3)){
                 ans =( ans%mod + solve(i,count+1,dp,n)%mod)%mod;
            }else if(prev == 4 && (i == 3 || i==5 )){
                 ans =( ans%mod + solve(i,count+1,dp,n)%mod)%mod;
            }else if(prev == 5 && i == 1){
                ans =( ans%mod + solve(i,count+1,dp,n)%mod)%mod;
            }
        }
        return dp[count][prev] = ans%mod;
        
    }
    
    
    int countVowelPermutation(int n) {
        long ans = 0 ;
        vector<vector<int>>dp(n+1,vector<int>(6,-1));
        for(int i=1;i<6;i++){
            ans = (ans%mod + solve(i,1,dp,n)%mod)%mod;
        }
        return ans;
        
    }
};