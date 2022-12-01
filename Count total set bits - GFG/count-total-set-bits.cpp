//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    /*
    // TLE
    int countSetBitsNumber(int n)
    {
        // Your logic here
        int count=0;
        while(n!=0) {
            n &= (n-1);
            count++;
        }
        return count;
    }
    int countSetBits(int n) {
        int res=0;
        for(int i=1;i<=n;i++) res+=countSetBitsNumber(i);
        return res;
    }
    */
    /*
    // TLE
    int countSetBits(int n) {
        int setCount=0;
        while(n>0) {
            int temp=n;
            while(temp>0) {
                setCount+=(temp&1);
                temp=temp>>1;
            }
            n--;
        }
        return setCount;
    }
    */
    int helper(int n) {
        if(n<=0) return 0;
        if(n==1) return 1;
        int x=log2(n);
        int nearestPowerOf2=1<<x;
        return ((nearestPowerOf2>>1)*x)+(n-nearestPowerOf2+1)+helper(n-nearestPowerOf2); // nearestPowerOf2>>1)*x = 2 ^ (x-1)
    }
    int countSetBits(int n) {
        return helper(n);
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends