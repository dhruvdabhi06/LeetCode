class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0 , j = 0 ;
        vector<int>v(m+n);
        int k = 0 ;
        while(i<m && j<n){
            if(nums1[i] < nums2[j]){
                v[k] = nums1[i];
                i++;
                k++;
            }else{
                v[k] = nums2[j];
                j++;
                k++;
            }
        }
        while(i < m){
            v[k] = nums1[i];
            i++;
            k++;
        }
        while(j < n){
            v[k] = nums2[j];
            j++;
            k++;
        }
        nums1 = v;
    }
};