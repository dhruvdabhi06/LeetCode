class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        int ans = 0 ;
        for(int i=1;i<n;i++){
            if(nums[i-1] > nums[i]){
               if(ans == 1) return false;
                ans++;
                if(i == 1 || nums[i-2] <= nums[i]){
                    nums[i-1] = nums[i];
                }else{
                    nums[i] = nums[i-1];
                }
            }
        }
        return true;
    }
        
};