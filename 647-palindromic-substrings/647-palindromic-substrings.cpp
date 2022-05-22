class Solution {
public:
    int countSubstrings(string s) {
        int len = s.length();
        int count = 0;
        vector<vector<int>>dp(len, vector<int>(len,0));
        for(int i=0;i<len;i++){
            dp[i][i] = 1;
            count++;
        }
        
        for(int i=1;i<len;i++){
            for(int j=0;j < i;j++){
                if(( j + 1 == i && s[i] == s[j]) || (dp[j + 1][i - 1] == 1 && s[i] == s[j])){
                   dp[j][i] = 1;
                   count++;
                }
            }
        }
        return count;
    }
};