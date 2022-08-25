class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>rn(26,0);
        for(auto x:magazine){
            rn[x-'a']++;
        }
        for(auto x:ransomNote){
            rn[x-'a']--;
            if(rn[x-'a'] < 0 ){
                return false;
            }
        }
        return true;
       
    }
};