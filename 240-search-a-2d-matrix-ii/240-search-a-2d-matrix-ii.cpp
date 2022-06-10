class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = matrix[0].size()-1;
        int n = matrix.size()-1;
        int s = 0;
        while(n >= 0 && s <= i){
            if(matrix[n][s] == target) return true;
            else if(matrix[n][s] > target) n--;
            else s++;
        }
        return false;
    }
};