// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        /*
        //code
        sort(a.begin(), a.end());
        long long int min_num=INT_MAX;
        for(long long int i=0,j=m-1;i<n && j<n;i++,j++) {
            long long int temp=a[j]-a[i];
            if(temp<min_num)
                min_num=temp;
        }
        return min_num;
        */
        // Practice 1
        sort(a.begin(),a.end());
        long long int min_dif=INT_MAX;
        for(long long int i=0,j=m-1;j<n;i++,j++) {
            min_dif=min(min_dif,a[j]-a[i]);
        }
        return min_dif;
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends