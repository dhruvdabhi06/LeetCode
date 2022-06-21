class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        // using priority queue
        
        // using min-heap
        
        // push diff of height in heap
        
        // and if size of priority queue exceeds size of ladderes
        
        // we start to remove top element of priority queue from bricks
        
        // when bricks gets 0 we return value
        
        // and if not then return n - 1
        int n = heights.size();
        
        priority_queue<int, vector<int>, greater<int> > pq ;
        for(int i=1;i<n;i++){
            
            int diff = heights[i] - heights[i-1];
            
            if(diff > 0){
                
                pq.push(diff);
                
                if(pq.size() > ladders){
                    bricks -= pq.top();
                    pq.pop();
                }
            
                if(bricks < 0){
                    return i-1;
                }
                
            }
            
        }
        
        return n - 1;
    }
};