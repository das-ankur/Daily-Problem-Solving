//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        long long int xor_all=0;
        for(long long int i=0;i<N;i++) xor_all^=Arr[i];
        int setbit;
        for(int i=0;i<64;i++) {
            long long int curr=1<<i;
            if(xor_all & curr) {
                setbit=i;
                break;
            }
        }
        long long int first=0,second=0;
        for(long long int i=0;i<N;i++) {
            if(Arr[i] & 1<<setbit) first^=Arr[i];
            else second^=Arr[i];
        }
        if(first>second) return {first,second};
        else return {second,first};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends