class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd ;
        vector<int> even;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }
        nums.clear();
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        int nmin = min(even.size(),odd.size());
        int i;
        for(i=0;i<nmin; i++){
            nums.push_back(even[i]);
            nums.push_back(odd[i]);
        }
        if(even.size() > odd.size()){
            nums.push_back(even[i]);
        }
        return nums;
    }
};