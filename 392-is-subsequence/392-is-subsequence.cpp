class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        int i = 0 , j = 0 ;
        while(s[i] != '\0'){
            if(j==n2){
                return false;
            }
            if(s[i] == t[j]){
                i++;
                j++;
            }else{
                j++;
            }
        }
        return true;
    }
};