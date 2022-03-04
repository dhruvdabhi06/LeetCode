class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        if(mat.size()*mat[0].size()!= r*c){
            return mat;
        }
        vector<vector<int>> ans(r,vector<int>(c));
        int nrow = 0;
        int ncoloum = 0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                ans[nrow][ncoloum] = mat[i][j];
                
                ncoloum++;
                if(ncoloum == c){
                    ncoloum = 0;
                    nrow++;
                }
            }
        }
        return ans;
        
    }
};