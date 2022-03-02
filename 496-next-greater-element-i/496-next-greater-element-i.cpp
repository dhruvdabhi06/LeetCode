class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans ;
        int n1 = nums1.size();
        int n2= nums2.size();
        for(int i=0;i<n1;i++){
            int x = find(nums2.begin(),nums2.end(),nums1[i]) - nums2.begin();
            int flag;
            for(int j=x;j<n2;j++){
                if(nums2[j] > nums1[i]){
                    flag =1;
                    ans.push_back(nums2[j]);
                    break;
                }else
                    flag = 0;
            }
            if(flag == 0)
                ans.push_back(-1);
        }
        return ans;
    }
};