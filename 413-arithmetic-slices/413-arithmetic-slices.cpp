class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3){
            return 0;
        }
        int index = 0, count = 0 , diff = 0;
        int prev = nums[1] - nums[0];
        for(int i=1;i<nums.size()-1;i++){
            int deff = nums[i+1] - nums[i];
            if(deff == prev){
                ++index;
            }else{
                prev = deff;
                index = 0;
            }
            count += index;
        }
        
        return count;
    }
};