class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(auto i:nums){
            if(i == 0) continue;
            nums[count++] = i;
        }
        for(int i=count;i<nums.size();i++){
            nums[i] = 0;
        }
        
    }
};