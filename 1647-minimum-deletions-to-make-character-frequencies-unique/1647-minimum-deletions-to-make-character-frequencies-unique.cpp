class Solution {
public:
    int minDeletions(string s) {
        vector<int>ss(26);
        for(auto it : s){
            ss[it-'a']++;
        }
        int del = 0 ;
        sort(ss.begin(),ss.end());
        for(int i=24;i>=0;i--){
            if(ss[i] == 0) break;
            if(ss[i] >= ss[i+1]){
                int prev = ss[i];
                ss[i] = max(0,ss[i+1]-1);
                del += prev - ss[i];
            }
        }
        
        return del;
    }
};