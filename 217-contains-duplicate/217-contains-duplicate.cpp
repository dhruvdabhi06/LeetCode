class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int n = nums.size();
        sort(nums.begin(),nums.end()); //easier to work upon , if duplicates the // elements will be always adjacent to each other
        for(int i = 0;i < n - 1;i++){
            if(nums[i] == nums[i + 1]) return true;
        }
         return false;
    }
};