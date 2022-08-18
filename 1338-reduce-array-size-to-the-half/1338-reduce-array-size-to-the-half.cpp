class Solution {
public:
    
    int minSetSize(vector<int>& arr) {
        map<int,int>hsh;
        int n = arr.size();
        int n2 = n ;
        for(int i=0;i<arr.size();i++){
            hsh[arr[i]]++;
        }
        
        vector<int>v;
        for(auto it:hsh){
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        int ans = 0;
        for(int i=v.size()-1;i>=0;i--){
            n2-=v[i];
            if(n2<=(n/2)){
                ans=ans+1;
                break;
            }
            else
                ans++;
        }
        return ans;
    }
};