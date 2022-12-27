//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    /*
    // Recursion 
    int helper(int i, int prev, int n, vector<vector<int>> &points) {
        if(i==n) return 0;
        int max_merit=INT_MIN;
        for(int j=0;j<3;j++) {
            if(i!=0 && j==prev) continue;
            max_merit=max(max_merit,points[i][j]+helper(i+1,j,n,points));
        }
        return max_merit;
    }
    int maximumPoints(vector<vector<int>>& points, int n) {
        return helper(0,0,n,points);
    }
    */
    // Memoization
    int helper(int i, int prev, int n, vector<vector<int>> &points, vector<vector<int>> &memo) {
        if(i==n) return 0;
        if(memo[i][prev]!=-1) return memo[i][prev];
        int max_merit=INT_MIN;
        for(int j=0;j<3;j++) {
            if(i!=0 && j==prev) continue;
            max_merit=max(max_merit,points[i][j]+helper(i+1,j,n,points,memo));
        }
        return memo[i][prev]=max_merit;
    }
    int maximumPoints(vector<vector<int>>& points, int n) {
        vector<vector<int>> memo(n,vector<int>(3,-1));
        return helper(0,0,n,points,memo);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends