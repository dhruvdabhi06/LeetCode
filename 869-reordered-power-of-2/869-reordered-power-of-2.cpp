class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        sort(s.begin(),s.end());
        vector<string>power;
        for(int i=0;i<=30;i++){
            int p = pow(2,i);
            string temp = to_string(p);
            power.push_back(temp);
        }
        for(int i=0;i<=30;i++){
            sort(power[i].begin(),power[i].end());
        }
        for(int i=0;i<=30;i++){
            if(power[i] == s) return true;
        }
        return false;
    }
};