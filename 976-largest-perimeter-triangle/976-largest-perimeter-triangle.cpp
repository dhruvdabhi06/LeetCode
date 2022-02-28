class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i=nums.size()-1;i>1;i--){
            int c = nums[i];
            int b = nums[i-1];
            int a = nums[i-2];
            if(a+b > c){
                return a+b+c;
            }
        }
        return 0;
    }
};