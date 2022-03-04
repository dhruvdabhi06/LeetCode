class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        for(int i=0,j=mat[i].size()-1;i<mat.size();i++,j--){
            if(i==j){
                sum += mat[i][i];
            }else{
                sum += mat[i][i] + mat[i][j];
            }
            
        }
        return sum;
    }
};