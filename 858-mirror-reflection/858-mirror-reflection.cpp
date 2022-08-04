class Solution {
public:
    int solve(int tL,int tR,int bR,int bL,int p ,int rayDist,int q ){
        if(rayDist == p){
            return tR;
        }
        if(rayDist == 0) return bR;
        
        if(rayDist*2 <= p){
            return solve(tR,tL,bL,bR,p,rayDist+q,q);
        }else{
            return solve(bR,bL,tL,tR,p,rayDist+q-p,q);
        }
        
        
    }
    
    
    int mirrorReflection(int p, int q) {
        int tL = 2 , tR =1 , bR = 0 , bL = -1 ;
        return solve(tL,tR,bR,bL,p,q,q);
    }
};