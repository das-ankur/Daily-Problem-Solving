//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int> m;
        int maxi=0;
        int prefix_sum=0;
        for(int i=0;i<n;i++) {
            prefix_sum += A[i];
            if(prefix_sum==0) maxi=max(maxi,i+1);
            else {
                if(m.find(prefix_sum)!=m.end()) maxi=max(maxi,i-m[prefix_sum]);
                else m[prefix_sum]=i;
            }
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends