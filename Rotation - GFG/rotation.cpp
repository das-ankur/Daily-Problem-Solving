//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int low=0, high=n-1;
	    if(arr[low]<=arr[high]) return low;
	    while(low<=high) {
	        int mid=low+(high-low)/2;
	        int prev=(mid+n-1)%n;
	        int next=(mid+1)%n;
	        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]) return mid;
	        else if(arr[high]>arr[mid]) high=mid-1;
	        else low=mid+1;
	    }
	    return -1;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends