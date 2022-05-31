class Solution {
public:
    bool hasAllCodes(string s, int k) {
        // edge case
        if(k > s.size()) return false;
        unordered_set<string>st;
        
        // creating all the substrings
        for(int i=0;i<=s.size()-k;i++){
            st.insert(s.substr(i,k));
        }
        // checking if all substrings are present or not
        if(st.size() == pow(2,k)) return true;
        return false;
    }
};