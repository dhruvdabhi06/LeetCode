class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int n1 = word1.length();
        int n2 = word2.length();
        string ans;
        int i, j;
        int k = 0;
        for(i=0,j=0;(i<n1 && j<n2);i++,j++){
            ans.push_back(word1[i]);
            ans.push_back(word2[j]);
        }
        if(n1 > n2){
            for(;i<n1;i++){
                ans.push_back(word1[i]);
                
            }
        }else{
            for(;j<n2;j++){
                ans.push_back(word2[j]);
                
            }
        }
        return ans;
    }
};