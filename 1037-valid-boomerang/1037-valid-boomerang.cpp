class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int ans = 0;
        for(int i=0;i<3;i++){
            ans += points[i][0] * (points[ (i+1) % 3][1] - points[ (i+2) %3][1]);
        }
        if(ans == 0){
            return false;
        }
        return true;
    }
};