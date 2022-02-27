// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    /*
    //  Using Recursion
    long long int nthFibonacci(long long int n){
        // code here
        if(n<=1)
            return n;
        return nthFibonacci(n-1)+nthFibonacci(n-2);
    }
    */
    //Using Dynamic Programming
    long long int nthFibonacci(long long int n) {
        long long int fib[n+1];
        fib[0]=0;
        fib[1]=1;
        fib[2]=1;
        for(int i=3;i<=n;i++)
            fib[i]=(fib[i-1]%1000000007+fib[i-2]%1000000007)%1000000007;
        return fib[n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends