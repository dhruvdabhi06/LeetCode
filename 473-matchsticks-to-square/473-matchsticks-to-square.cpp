class Solution {
public:
    bool solve(vector<int>&matchsticks,vector<int>&kow,int index,int target){
        if(index == -1)
            return true;
        for(int i=0;i<4;i++){
            if(kow[i] + matchsticks[index] > target or (i > 0 && kow[i]==kow[i-1])){
                continue;
            }
            kow[i] += matchsticks[index];
            if(solve(matchsticks,kow,index-1,target)) return true;
            kow[i] -= matchsticks[index];
        }
        return false;
    }
    
    
    bool makesquare(vector<int>& matchsticks) {
        int sum = 0 ;
        for(auto i:matchsticks){
            sum += i ;
        }
        if(sum % 4 != 0 or matchsticks.size() < 3) return false;
        
        sort(matchsticks.begin(),matchsticks.end());
        vector<int>kow(4,0);
        return solve(matchsticks,kow,matchsticks.size()-1,sum/4);
        
    }
};