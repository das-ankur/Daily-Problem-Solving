//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        unordered_map<int,int> m;
        for(int i=0;i<n;i++) m[arr[i]]++;
        int a,b;
        for(int i=1;i<=n;i++) {
            if(m.find(i)!=m.end()) {
                if(m[i]==2) b=i;
            }
            else a=i;
        }
        int *res=new int[2];
        res[0]=b;
        res[1]=a;
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends