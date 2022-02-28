class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = nums.size()-1;
        
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                return true;
            }else if(nums[mid] < target){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return false;
    }
};