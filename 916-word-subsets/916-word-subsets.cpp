class Solution {
public:
    int charCount(string s , char ch){
        int cnt = 0 ;
        for(char c : s){
            if(c == ch){
                cnt++;
            }
        }
        return cnt;
    }
    bool isSubset(string s , vector<int>&freq){
        for(char i='a'; i<'z'; i++){
            if(charCount(s,i) < freq[i-'a']){
                return false;
            }
        }
        return true;
    }
    
    
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int>freqWord2(26,0);
        vector<string>res;
        for(string s:words2){
            for(char i = 'a' ; i < 'z' ; i++){
                freqWord2[i-'a'] = max(freqWord2[i-'a'], charCount(s,i));
            }
        }
        for(string s : words1){
            if(isSubset(s,freqWord2)){
                res.push_back(s);
            }
        }
        return res;
    }
};