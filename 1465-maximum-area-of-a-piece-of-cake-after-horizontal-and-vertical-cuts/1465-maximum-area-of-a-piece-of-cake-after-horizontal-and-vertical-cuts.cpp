int mod = 1000000007;
class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        hc.push_back(0);
        hc.push_back(h);
        vc.push_back(0);
        vc.push_back(w);
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        int n = hc.size();
        int m = vc.size();
        long long int hans = 0 , vans = 0 ;
        
        
        
        for(int i=1;i<n;i++){
            if(hans < hc[i] - hc[i-1]) hans = hc[i] - hc[i-1];
        } 
        


        
        for(int i=1;i<m;i++){
            if(vans < vc[i] - vc[i-1]) vans = vc[i] - vc[i-1];
        }
        
            
    
        int ans = (vans*hans) %mod;
        
        return ans;
        
        
        
        
        
    }
};