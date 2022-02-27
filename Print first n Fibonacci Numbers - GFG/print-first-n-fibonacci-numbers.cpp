// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> res;
    void fib(long long a, long long b, int n) {
        if(n==0) {
            return;
        }
        res.push_back(a);
        fib(b, a+b, n-1);
    }
    vector<long long> printFibb(int n) 
    {
        //code here
        fib(1, 1, n);
        return res;
    }
};

// { Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}
  // } Driver Code Ends