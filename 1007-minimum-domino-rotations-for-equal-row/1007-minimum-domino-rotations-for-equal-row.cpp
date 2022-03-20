class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        
        //faceA for counting occurance of 1 to 6 numbers for tops
        //faceB for counting occurance of 1 to 6 number for bottoms
        //same for counting occurance of same numbers in both vectors
        vector<int>faceA(7), faceB(7), same(7);
        for(int i = 0; i < n; i++){
            faceA[tops[i]]++;
            faceB[bottoms[i]]++;
            if(tops[i] == bottoms[i]){
                same[tops[i]]++;
            }
        }
        int minRot = INT_MAX;
        for(int i = 1; i <= 6; i++){
            if(faceA[i] + faceB[i] - same[i] == n)
                minRot = min(minRot, min(faceA[i], faceB[i]) - same[i]);
        }
        return minRot == INT_MAX ? -1 : minRot;
        
    }
};