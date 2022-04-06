class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int>map(n+1,0);
        for(auto it:nums){
            map[it]++;
        }
        int ans;
        for(int i=0;i<n+1;i++){
            if(map[i] == 0){
                ans = i;
                break;
            }
        }
        return ans;
    }
};