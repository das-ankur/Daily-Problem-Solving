//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	/*
	int print2largest(int arr[], int n) {
	    // code here
	    if(n==1) return -1;
	    int max_val=*max_element(arr, arr+n);
	    int second_max=INT_MIN;
	    for(int i=0;i<n;i++) {
	        if(arr[i]<max_val && arr[i]>second_max) second_max=arr[i];
	    }
	    return second_max==INT_MIN?-1:second_max;
	}
	*/
	int print2largest(int arr[], int n) {
	    if(n==1) return -1;
	    int max_val=*max_element(arr,arr+n);
	    int second_val=INT_MIN;
	    for(int i=0;i<n;i++) {
	        if(arr[i]>second_val && arr[i]<max_val) second_val=arr[i];
	    }
	    return second_val==INT_MIN?-1:second_val;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends