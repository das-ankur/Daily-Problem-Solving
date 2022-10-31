//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    // Binary Search: Optimized Solution is Linear Search
    sort(arr, arr+n);
    pair<int, int> res;
    int low=0, high=n-1;
    while(high-low>1) {
        int mid=(low+high)/2;
        if(arr[mid]<=x) low=mid;
        else high=mid-1;
    }
    if(arr[high]<=x) res.first=arr[high];
    else if(arr[low]<=x) res.first=arr[low];
    else res.first=-1;
    low=0, high=n-1;
    while(high-low>1) {
        int mid=(low+high)/2;
        if(arr[mid]>=x) high=mid;
        else low=mid+1;
    }
    if(arr[low]>=x) res.second=arr[low];
    else if(arr[high]>=x) res.second=arr[high];
    else res.second=-1;
    return res;
}