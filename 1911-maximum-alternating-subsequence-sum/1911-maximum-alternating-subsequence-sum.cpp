class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        long long prevmaxodd = nums[0];
        long long prevmaxeven = 0;;
        for(int i=0;i<n;i++){
            long long int temp = prevmaxodd;
            prevmaxodd = max(prevmaxodd,nums[i]+prevmaxeven);
            prevmaxeven = max(prevmaxeven,temp-nums[i]);
        }
        return prevmaxodd;
    }
};