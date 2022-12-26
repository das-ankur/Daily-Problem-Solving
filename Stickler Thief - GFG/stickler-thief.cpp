//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    /*
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
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
    /*
    // Recursion
    int helper(int i, int arr[]) {
        if(i<0) return 0;
        int notTake=helper(i-1,arr);
        int take=arr[i];
        if(i>=2) take+=helper(i-2,arr);
        return max(take,notTake);
    }
    int FindMaxSum(int arr[], int n) {
        return helper(n-1,arr);
    }
    */
    /*
    // Memoization
    int helper(int i, int arr[], vector<int> &memo) {
        if(i<0) return 0;
        if(memo[i]!=-1) return memo[i];
        int notTake=helper(i-1,arr,memo);
        int take=arr[i];
        if(i>=2) take+=helper(i-2,arr,memo);
        return memo[i]=max(take,notTake);
    }
    int FindMaxSum(int arr[], int n) {
        vector<int> memo(n,-1);
        return helper(n-1,arr,memo);
    }
    */
    /*
    // Tabulation
    int FindMaxSum(int arr[], int n) {
        vector<int> table(n,0);
        table[0]=arr[0];
        for(int i=0;i<n;i++) {
            int notTake=table[i-1];
            int take=arr[i];
            if(i>=2) take+=table[i-2];
            table[i]=max(take,notTake);
        }
        return table[n-1];
    }
    */
    // Space Optimization
    int FindMaxSum(int arr[], int n) {
        int prev1=arr[0],prev2=0;
        for(int i=0;i<n;i++) {
            int notTake=prev1;
            int take=arr[i];
            if(i>=2) take+=prev2;
            prev2=prev1;
            prev1=max(take,notTake);
        }
        return prev1;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends