// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    long long int max_num=INT_MIN, min_num=INT_MAX;
    for(int i=0;i<n;i++) {
        if(a[i]>max_num)
            max_num=a[i];
        if(a[i]<min_num)
            min_num=a[i];
    }
    return make_pair(min_num, max_num);
}