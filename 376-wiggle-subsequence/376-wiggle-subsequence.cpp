class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        int f = 1 , l = 1 ;
        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1]) f = l + 1;
            else if(nums[i] < nums[i-1]) l = f + 1;
        }
        return max(f,l);
    }
};