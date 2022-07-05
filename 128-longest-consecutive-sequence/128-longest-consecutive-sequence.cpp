class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n < 1) return 0;
        else if(n == 1) return 1;
        sort(nums.begin(),nums.end());
        int count = 1 ;
        int ans = 1 ;
        for(int i=1;i<n;i++){
            if(nums[i-1] == nums[i]) continue;
            else if(nums[i-1]+1 == nums[i]) count++;
            else{
                ans = max(ans,count);
                count = 1 ;
            }
        }
        ans = max(ans,count);
        return ans;
        
    }
};