//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    /*
    // Recursion
    bool helper(int idx, int target, vector<int> &arr) {
        if(idx==0) return target==arr[0];
        if(target==0) return true;
        bool notTake=helper(idx-1,target,arr);
        bool take=false;
        if(target>=arr[idx]) take=helper(idx-1,target-arr[idx],arr);
        return notTake||take;
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        return helper(n-1,sum,arr);
    }
    */
    /*
    // Memoization
    bool helper(int idx, int target, vector<int> &arr, vector<vector<int>> &memo) {
        if(idx==0) return target==arr[0];
        if(target==0) return true;
        if(memo[idx][target]!=-1) return memo[idx][target];
        bool notTake=helper(idx-1,target,arr,memo);
        bool take=false;
        if(target>=arr[idx]) take=helper(idx-1,target-arr[idx],arr,memo);
        return memo[idx][target]=notTake||take;
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<vector<int>> memo(n, vector<int>(sum+1,-1));
        return helper(n-1,sum,arr,memo);
    }
    */
    /*
    // Tabulation
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<vector<bool>> table(n, vector<bool>(sum+1,false));
        for(int target=0;target<=sum;target++) table[0][target]=(target==arr[0]);
        for(int idx=0;idx<n;idx++) table[idx][0]=true;
        for(int idx=1;idx<n;idx++) {
            for(int target=0;target<=sum;target++) {
                bool notTake=table[idx-1][target];
                bool take=false;
                if(target>=arr[idx]) take=table[idx-1][target-arr[idx]];
                table[idx][target]=notTake||take;
            }
        }
        return table[n-1][sum];
    }
    */
    /*
    // Space Optimization
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<bool> prev(sum+1,false);
        for(int target=0;target<=sum;target++) prev[target]=(target==arr[0]);
        prev[0] = true;
        for(int idx=1;idx<n;idx++) {
            vector<bool> cur(sum+1,false);
            cur[0]=true;
            for(int target=1;target<=sum;target++) {
                bool notTake=prev[target];
                bool take=false;
                if(target>=arr[idx]) take=prev[target-arr[idx]];
                cur[target]=notTake||take;
            }
            prev=cur;
        }
        return prev[sum];
    }
    */
    
    // Practice
    /*
    bool helper(int i, int sum, vector<int> &arr) {
        if(i==arr.size()) return false;
        if(sum==0) return true;
        bool res=false;
        if(arr[i]<=sum) res=helper(i+1,sum-arr[i],arr);
        return res||helper(i+1,sum,arr);
    }
    bool isSubsetSum(vector<int>arr, int sum){
        return helper(0,sum,arr);
    }
    */
    bool helper(int i, int sum, vector<int> &arr,vector<vector<int>> &memo) {
        if(i==arr.size()-1) return sum==arr[i];
        if(sum==0) return true;
        if(memo[i][sum]!=-1) return memo[i][sum];
        bool take=false;
        if(sum>=arr[i]) take=helper(i+1,sum-arr[i],arr,memo);
        bool skip=helper(i+1,sum,arr,memo);
        return memo[i][sum]=take||skip;
    }
    bool isSubsetSum(vector<int>arr, int sum){
        vector<vector<int>> memo(arr.size(),vector<int>(sum+1,-1));
        return helper(0,sum,arr,memo);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends