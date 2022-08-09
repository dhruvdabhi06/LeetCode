int mod = 1e9 + 7;

class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<int,long long>mp ;
        int ans = 0 ;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]] = 1;   
            for(int j=0;j<i;j++){
                if(arr[i] % arr[j] == 0 ){
                    mp[arr[i]] = (mp[arr[i]]%mod + (mp[arr[j]] * mp[arr[i]/arr[j]])%mod)%mod;
                    mp[arr[i]] %= mod;
                }
            }
            ans = (ans + mp[arr[i]]) %mod;
        }
        return ans ; 
    }
    
};