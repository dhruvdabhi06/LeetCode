class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int>k ; 
        int m = mat.size();
        int n = mat[0].size();
        for(int r=0;r<m;r++){
            k.clear();
            for(int j=0,i=r;i < m && j < n ; i++ , j++){
                k.push_back(mat[i][j]);
            }
            sort(k.begin(),k.end());
            for(int j=0,i=r;i < m && j < n ; i++ , j++){
                mat[i][j] = k[j];
            }
            
        }
        for(int c=0;c<n;c++){
            k.clear();
            for(int i=0,j=c;i<m&&j<n;i++,j++){
                k.push_back(mat[i][j]);
            }
            sort(k.begin(),k.end());
            for(int i=0,j=c;i<m&&j<n;i++,j++){
                mat[i][j] = k[i];
            }
        }
        return mat;
    }
};