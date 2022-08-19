class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>hash;
        for(auto x : nums){
            hash[x]++;
        }
        vector<int>ans;
        for(auto x:hash){
            if(x.second > 1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};