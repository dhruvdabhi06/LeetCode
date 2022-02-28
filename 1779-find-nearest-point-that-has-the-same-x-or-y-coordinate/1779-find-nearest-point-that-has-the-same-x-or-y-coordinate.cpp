class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n = points.size();
        int dist = INT_MAX;
        int index = -1;
        for(int i=0;i<n;i++){
            if(x == points[i][0] || y == points[i][1]){
                int tempdist = abs(x-points[i][0]) + abs(y - points[i][1]);
                if(tempdist < dist){
                    dist = tempdist;
                    index = i;
                }
            }
        }
        if(dist == INT_MAX){
            return -1;
        }
        return index;
    }
};