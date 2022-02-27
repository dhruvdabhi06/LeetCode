class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        map<char,int>hash;
        for(int i=0;i<s.length();i++){
            hash[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            hash[t[i]]--;
            if(hash[t[i]] < 0){
                return false;
            }
        }
        return true;
    }
};