class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int rows = mat.size();
        int cols = mat[0].size();
        int low = 0 ;
        int high = cols*rows - 1;
        while(low <= high){
            int mid = low+(high - low);
            int row = mid / cols;
            int col = mid % cols;
            if(target == mat[row][col]){
                return true;
            }
            if(mat[row][col] >= target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        
        return false;
    }
};