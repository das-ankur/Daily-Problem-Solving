//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    /*
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high) {
            int pivot=partition(arr,low,high);
            quickSort(arr,low,pivot-1);
            quickSort(arr,pivot+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=arr[low];
       int i=low, j=high;
       while(i<j) {
           while(arr[i]<=pivot && i<=high-1) i++;
           while(arr[j]>pivot && j>=low) j--;
           if(i<j) swap(arr[i],arr[j]);
       }
       swap(arr[j],arr[low]);
       return j;
    }
    */
    /*
    int partition(int arr[], int low, int high) {
        int pivot=arr[low];
        int i=low, j=high;
        while(i<j) {
            while(arr[i]<=pivot && i<=high-1) i++;
            while(arr[j]>pivot && j>=low) j--;
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[j],arr[low]);
        return j;
    }
    */
    int partition(int arr[], int low, int high) {
        int pivot=arr[low];
        int i=low, j=high;
        while(i<j) {
            while(arr[i]<=pivot && i<=high-1) i++;
            while(arr[j]>pivot && j>=low) j--;
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[j],arr[low]);
        return j;
    }
    void quickSort(int arr[], int low, int high) {
        if(low<high) {
            int pos=partition(arr,low,high);
            quickSort(arr,low,pos-1);
            quickSort(arr,pos+1,high);
        }
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends