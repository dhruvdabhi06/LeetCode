class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix(nums.size(),0);
        int n = nums.size();
        prefix[0] = nums[0];
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
        if(prefix[n-1] - prefix[0] == 0){
            return 0;
        }
        for(int i=1;i<n;i++){
            int left = prefix[i-1];
            int right = prefix[n-1] - prefix[i];
            if(left == right){
                return i;
            }
        }
        return -1;
        
    }
};