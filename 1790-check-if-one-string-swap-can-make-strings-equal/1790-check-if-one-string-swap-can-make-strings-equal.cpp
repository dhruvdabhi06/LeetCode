class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count = 0 , n = s1.length() ;
        map <char,int> mp;
        for(auto s:s1) mp[s] += 1;
        for(auto s:s2) 
            if(mp[s]==1) mp.erase(s);
            else mp[s] += -1;
        if(mp.size() != 0) return false;
        for(int i=0;i<n;i++){
            if(s1[i] != s2[i]) count++;
            if(count > 2 ) return false;
        }
        return true;
        
    }
};