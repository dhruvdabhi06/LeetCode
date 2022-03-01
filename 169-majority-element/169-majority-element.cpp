class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxele ;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(count == 0){
                maxele = nums[i];
            }
            if(nums[i] == maxele){
                count++;
            }else{
                count--;
            }
        }
        return maxele;
        // moore's algorith
    }
};