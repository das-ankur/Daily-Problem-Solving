//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isPossible(vector<int> &stations, int k, double dist) {
        int new_stations=0;
        for(int i=0;i<stations.size()-1;i++) {
            double cur_dist=stations[i+1]-stations[i];
            new_stations += (int)floor(cur_dist/dist);
        }
        return new_stations<=k;
    }
    double findSmallestMaxDist(vector<int> &stations, int K){
      // Code here
      double low=0,high=0;
      for(int i=0;i<stations.size()-1;i++) high=high<stations[i+1]-stations[i]?(double)(stations[i+1]-stations[i]):high;
      while(high-low>1e-6) {
          double mid=low+(high-low)/2.0;
          if(isPossible(stations,K,mid)) high=mid;
          else low=mid;
      }
      return high;
    }
};

//{ Driver Code Starts.
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> stations(n);
    for (int i = 0; i < n; i++)
    {
      cin >> stations[i];
    }
    int k;
    cin >> k;
    Solution obj;
    cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k) << endl;
  }
  return 0;
}
// } Driver Code Ends