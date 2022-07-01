class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size();
        sort(boxTypes.begin(),boxTypes.end(),[](const vector<int>&a,const vector<int>&b){
           return a[1] > b[1]; 
        });
        int ans = 0 ;
        for(int i=0;i<n;i++){
            if(boxTypes[i][0] <= truckSize){
                truckSize -= boxTypes[i][0];
                ans += boxTypes[i][0] * boxTypes[i][1];
            }else{
                ans += boxTypes[i][1]*truckSize;
                truckSize = 0;
            }
        }
        return ans;
    }
};