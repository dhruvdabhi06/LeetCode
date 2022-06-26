class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int exclude = n - k ;
        vector<int>pre(n+1,0);
        for(int i=1;i<=n;i++){
            pre[i] = pre[i-1] + nums[i-1];
        }
        int mn = INT_MAX;
        for(int i=1,j=exclude;j<=n;i++,j++){
           mn = min(mn,pre[j] - pre[i-1]); 
        }
        return pre[n]- mn;
    }
};