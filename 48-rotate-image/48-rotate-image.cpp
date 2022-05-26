class Solution {
public:
    void revcol(vector<vector<int>>&matrix){
        int n = matrix.size();
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n;j++){
                swap(matrix[j][i], matrix[j][n-i-1]);
            }
        }
    }
    
    
    void transpose(vector<vector<int>>&matrix){
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        revcol(matrix);
    }
    
    
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.size() == 1) return;
        transpose(matrix);
    }
};