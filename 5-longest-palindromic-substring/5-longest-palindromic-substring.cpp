class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        bool table[n+1][n+1];
        int end = 1;
        int start = 0 ;
        memset(table,false,sizeof(table));
        for(int i=0;i<n;i++){
            table[i][i] = true;
        }
        for(int i=0;i<n-1;i++){
            if(s[i] == s[i+1]){
                table[i][i+1] = true;
                end = 2;
                start = i;
            }
        }
        for(int i=2;i<n;i++){
            for(int j=0;j<n-i+1;j++){
                int left = j;
                int right = i + j;
                if(table[left+1][right-1] == true && s[left] == s[right]){
                    table[left][right] = true;
                    start = j ;
                    end = i + 1;
                }
            }
        }
        return s.substr(start,end);
    }
    
};