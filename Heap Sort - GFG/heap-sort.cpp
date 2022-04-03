// { Driver Code Starts
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int a[], int n, int i)  
    {
      // Your Code Here
        int maxIdx = i;
        int l = 2*i + 1;
        int r = 2*i + 2;
        
        if(l < n && a[l] > a[maxIdx]){
            maxIdx = l;
        }
        if(r < n && a[r] > a[maxIdx]){
            maxIdx = r;
        }
        if(maxIdx != i){
            swap(a[i],a[maxIdx]);
            heapify(a,n,maxIdx);
        }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int a[], int n)  
    { 
    // Your Code Here
        for(int i = n/2; i >= 0; i--){
            heapify(a,n,i);
        }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int a[], int n)
    {
        //code here
        buildHeap(a,n);
        for(int i=n-1;i>0;i--){
            swap(a[0],a[i]);
            heapify(a,i,0);
        }
    }
};




// { Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
  // } Driver Code Ends