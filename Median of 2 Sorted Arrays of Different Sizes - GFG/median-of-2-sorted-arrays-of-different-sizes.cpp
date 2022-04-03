// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& nums1, vector<int>& nums2)
    {
        // Your code goes here
        int n = nums1.size();
        int m = nums2.size();
        double ans;
        vector<int>nm;
        for(int i=0;i<n;i++){
            nm.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++){
            nm.push_back(nums2[i]);
        }
        sort(nm.begin(),nm.end());
        if(nm.size() == 1){
            return nm[0];
        }
        
        if((n+m) %2==0){
            ans = (double)(nm[( ((n+m)/2)-1)] + nm[ ((n+m)/2)] ) / 2;
        }else{
            ans = nm[ ((n+m)/2)];
        }
        return ans;
    
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends