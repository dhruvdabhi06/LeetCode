class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int>inout(n+1,0);
        for(auto a:trust){
            int u = a[0];
            int v = a[1];
            inout[u]--;
            inout[v]++;
        }
        for(int i=1;i<=n;i++){
            if(inout[i] == n-1) return i ;
        }
        return -1;
    }
};