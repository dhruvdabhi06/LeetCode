class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == ""){
            return 0;
        }
        int n1= haystack.length();
        int n2= needle.length();
        for(int i=0;i<=n1-n2;i++){
            int j;
            for(j=0;j<n2;j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if(j == n2){
                return i;
            }
        }
        return -1;
    }
};