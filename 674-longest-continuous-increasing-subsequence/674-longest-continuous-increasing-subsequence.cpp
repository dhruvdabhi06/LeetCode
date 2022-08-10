class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int temp = 1 ;
        int mx = 1 ;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1]){
                temp++;
            }else{
                mx = max(temp,mx);
                temp = 1;
            }
        }
        mx = max(temp,mx);
        return mx;
    }
};