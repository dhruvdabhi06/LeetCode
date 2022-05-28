class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag = false;
        if(is_sorted(nums.begin(),nums.end())){
            flag = true;
        }
        if(is_sorted(nums.rbegin(),nums.rend())){
            flag = true;
        }
        return flag;
    }
    
};