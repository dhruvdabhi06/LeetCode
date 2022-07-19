class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>ans ; // for returning 2d vector
        
        
        for(int i=0;i<numRows;i++){
            
            
            vector<int>temp; // we will push back this vector to the ans vector
            
            for(int j=0;j<=i;j++){
                
                if(j == 0 || j == i){ // if value of j is 0 or i then we will add one as shown in picture.. every row has 1 in the start and 1 in the end
                    
                    temp.push_back(1);
                    
                }else{
                    // we will add the sum of the two numbers above the current number
                    int tt = ans[i-1][j-1] + ans [i-1][j];
                    temp.push_back(tt); // we will push back the sum in temp vector
                    
                    
                }
            }
            
            ans.push_back(temp); // push back the temp vector to the ans vector
        }
        return ans; // returning ans
    }
};