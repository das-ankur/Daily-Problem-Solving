//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimizeCost(vector<int>& height, int n, int k) {
        vector<int> table(n,0);
        for(int i=n-2;i>=0;i--) {
            int min_energy=INT_MAX;
            for(int j=1;j<=k && i+j<=n-1;j++) min_energy=min(min_energy,abs(height[i]-height[i+j])+table[i+j]);
            table[i]=min_energy;
        }
        return table[0];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends