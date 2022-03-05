class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int n = coordinates[1] ;
        int x = coordinates[0] ;
        if((n+x) %2){
            return true;
        }
        return false;
    }
};