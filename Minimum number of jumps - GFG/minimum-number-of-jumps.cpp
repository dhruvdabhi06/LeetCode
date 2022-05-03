// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
       int count=1;
        
        if(n<=1)return 0;
        if(arr[0]<=0)return -1;
        
        int jump=arr[0];
        int maxi=arr[0];
        int i=1;
        while(i<n){
            if(i==n-1)break;
            maxi=max(maxi,arr[i]+i);
            jump--;
            if(jump==0){
                count++;
                if(i>=maxi)return -1;
                jump+=maxi-i;
            }
            i++;
        }
        return count;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends