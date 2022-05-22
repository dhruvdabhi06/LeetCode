class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int ans = 0 ;
        vector<long long>spaceleft(capacity.size());
        for(int i=0;i<capacity.size();i++){
            spaceleft[i] = capacity[i] - rocks[i];
        }
        sort(spaceleft.begin(),spaceleft.end());
        for(int i=0;i<capacity.size();i++){
            if(spaceleft[i] == 0){
                ans++;
            }else if(additionalRocks - spaceleft[i] >= 0){
                ans++;
                additionalRocks -= spaceleft[i];
            }
            
        }
        return ans;
    }
};