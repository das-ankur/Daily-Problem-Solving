//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	/*
	// Memoization
	int helper(int i, int *arr, vector<int> &memo) {
	    if(i==0) return arr[0];
	    if(memo[i]!=-1) return memo[i];
	    int notTake=helper(i-1,arr,memo);
	    int take=arr[i];
	    if(i>=2) take+=helper(i-2,arr,memo);
	    return memo[i]=max(notTake,take);
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int> memo(n,-1);
	    return helper(n-1,arr,memo);
	}
	*/
	/*
	// Tabulation
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int> table(n,-1);
	    table[0]=arr[0];
	    for(int i=1;i<n;i++) {
	        int notTake=table[i-1];
	        int take=arr[i];
	        if(i>=2) take+=table[i-2];
	        table[i]=max(notTake,take);
	    }
	    return table[n-1];
	}
	*/
	/*
	// Space Optimization
	int findMaxSum(int *arr, int n) {
	    // code here
	    int prev1=0, prev2=0;
	    prev1=arr[0];
	    for(int i=1;i<n;i++) {
	        int notTake=prev1;
	        int take=arr[i];
	        if(i>=2) take+=prev2;
	        int cur=max(notTake,take);
	        prev2=prev1;
	        prev1=cur;
	    }
	    return prev1;
	}
	*/
	// Practice
	/*
	int helper(int i, int n, int turn, int *arr) {
	    if(i==n) return 0;
	    if(turn==1) {
	        int take=arr[i]+helper(i+1,n,0,arr);
	        int not_take=helper(i+1,n,turn,arr);
	        return max(take,not_take);
	    }
	    else return helper(i+1,n,1,arr);
	}*/
	int helper(int i, int n, int turn, int *arr, vector<vector<int>> &memo) {
	    if(i==n) return 0;
	    if(memo[i][turn]!=-1) return memo[i][turn];
	    if(turn==1) {
	        int take=arr[i]+helper(i+1,n,0,arr,memo);
	        int not_take=helper(i+1,n,turn,arr,memo);
	        return memo[i][turn]=max(take,not_take);
	    }
	    else return memo[i][turn]=helper(i+1,n,1,arr,memo);
	}
	int findMaxSum(int *arr, int n) {
	    vector<vector<int>> memo(n, vector<int>(2,-1));
	    return helper(0,n,1,arr,memo);
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
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends