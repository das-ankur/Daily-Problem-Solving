//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    /*
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int max_count=0,row=-1;
	    for(int i=0;i<n;i++) {
	        int one_count=0;
	        for(int j=0;j<m;j++) {
	            if(arr[i][j]==1) one_count++;
	        }
	        if(one_count!=0 && one_count>max_count) {
	            max_count=one_count;
	            row=i;
	        } 
	    }
	    return row;
	}
    */
    int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
        int max_one_count=0, res_row=-1;
        for(int i=0;i<n;i++) {
            int one_count=0;
            for(int j=m-1;j>=0;j--) {
                if(arr[i][j]==1) one_count++;
                else break;
            }
            //cout<<one_count<<endl;
            if(max_one_count<one_count) {
                max_one_count=one_count;
                res_row=i;
            }
        }
        return res_row;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends