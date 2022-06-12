class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>st;
        int currsum = 0 , maxsum = 0 , l = 0 ;
        for(auto num : nums){
            while(st.find(num) != st.end()){
               currsum -= nums[l];
                st.erase(nums[l]);
                l++;
            }
            currsum += num;
            st.insert(num);
            maxsum = max(maxsum,currsum);
        }
        return maxsum;
    }
};