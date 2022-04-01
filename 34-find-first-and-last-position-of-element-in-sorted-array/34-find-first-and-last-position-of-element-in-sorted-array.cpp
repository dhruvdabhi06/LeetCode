class Solution {
public:
    int first_pos(vector<int>&a,int target){
        int n = a.size();
        int low = 0 , high = n -1 ;
        int first_pos = n;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(a[mid] >= target){
                first_pos = mid;
                high = mid - 1;
            }else{
                // a[mid] < x
                low = mid + 1;
            }
        }
        return first_pos;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = first_pos(nums,target);
        int last = first_pos(nums,target+1) - 1;
        if(first <= last){
            return {first, last};
        }
        return {-1,-1};
    }
};