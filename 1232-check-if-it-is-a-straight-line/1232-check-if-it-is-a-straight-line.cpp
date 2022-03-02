class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int deff1, deff2 ;
        if(coordinates.size() == 2) return true;
        deff1 = coordinates[1][0] - coordinates[0][0];
        deff2 = coordinates[1][1] - coordinates[0][1];
        for(int i=2;i<coordinates.size();i++){
            int tempdeff1, tempdeff2;
            tempdeff1 = coordinates[i][0] - coordinates[0][0];
            tempdeff2 = coordinates[i][1] - coordinates[0][1];
            if(tempdeff1*deff2 != deff1*tempdeff2){
                return false;
            }
        }
        return true;
    }
};