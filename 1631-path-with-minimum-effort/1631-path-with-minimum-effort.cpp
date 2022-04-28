class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& h) {
    priority_queue<vector<int> ,vector<vector<int>> ,greater<vector<int>>> pq;
    
    int n=h.size(),m=h[0].size();
    
    pq.push({0,0,0});
    
    int ans=0;
    
    vector<vector<int>> dir{{1,0},{0,1},{-1,0},{0,-1}};
    
    
    while(pq.size()>0)
    {
        vector<int> t=pq.top();
        
        pq.pop();
        
        ans=max(ans,t[0]);
        
        int i=t[1],j=t[2];
        
        if(h[i][j]==-1)
        {
            continue;
            //visited hai bhsdk
        }
        
        if(i==n-1 && j==m-1)
        {
            return ans;
        }
        
        
        for(int k=0;k<4;k++)
        {
            int i1=i+dir[k][0];
            
            int j1=j+dir[k][1];
            
            if(i1<0 || j1<0 || i1>=n || j1>=m || h[i][j]==-1)
            {
                continue;
                
            }
            
            
            pq.push({abs(h[i1][j1]-h[i][j]),i1,j1});
            
            
        }
        
        h[i][j]=-1;
        
    }
    
    
    return ans;
    }
};