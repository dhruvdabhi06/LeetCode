// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int mod = 0 , c = 0;
        vector<int>vi;
        while(N>0){
            mod = N%2;
            vi.push_back(mod);
            N=N/2;
        }
        for(auto &it:vi){
            if(it == 1) c++;
        }
        return c;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends