class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i = 0 , count = 1;
        for(int j = 1 ; j < nums.size(); j++){
            if(nums[i] == nums[j] && count < 2){
                count++;
                nums[++i] = nums[j];
            }else if(nums[i] != nums[j]){
                count = 1 ;
                nums[++i] = nums[j];
            }
         }
            return i + 1;
    }
};