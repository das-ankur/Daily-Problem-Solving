//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*
    // Recursion
    int helper(int i, int n, vector<int> &height) {
        if(i==n-1) return 0;
        int one_step=abs(height[i]-height[i+1])+helper(i+1,n,height);
        int two_step=INT_MAX;
        if(i+2<=n-1) two_step=abs(height[i]-height[i+2])+helper(i+2,n,height);
        return min(one_step,two_step);
    }
    // Memoization
    int helper(int i, int n, vector<int> &height, vector<int> &memo) {
        if(i==n-1) return 0;
        if(memo[i]!=-1) return memo[i];
        int one_step=abs(height[i]-height[i+1])+helper(i+1,n,height,memo);
        int two_step=INT_MAX;
        if(i+2<=n-1) two_step=abs(height[i]-height[i+2])+helper(i+2,n,height,memo);
        return memo[i]=min(one_step,two_step);
    }
    // Tabulation
    int minimumEnergy(vector<int>& height, int n) {
        vector<int> table(n,0);
        for(int i=n-2;i>=0;i--) {
            int one_step=abs(height[i]-height[i+1])+table[i+1];
            int two_step=INT_MAX;
            if(i+2<=n-1) two_step=abs(height[i]-height[i+2])+table[i+2];
            table[i]=min(one_step,two_step);
        }
        return table[0];
    }
    */
    // Space Optimization
    int minimumEnergy(vector<int>& height, int n) {
        int one_prev=0, two_prev=0;
        for(int i=n-2;i>=0;i--) {
            int one_step=abs(height[i]-height[i+1])+one_prev;
            int two_step=INT_MAX;
            if(i+2<=n-1) two_step=abs(height[i]-height[i+2])+two_prev;
            two_prev=one_prev;
            one_prev=min(one_step,two_step);
        }
        return one_prev;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends