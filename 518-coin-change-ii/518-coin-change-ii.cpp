class Solution {
public:
    /*
    // Recursion
    int helper(int idx, int a, vector<int> &coins) {
        if(idx==0) {
            return a%coins[idx]==0;
        }
        if(a==0) return 1;
        int notTake=helper(idx-1,a,coins);
        int take=0;
        if(coins[idx]<=a) take=helper(idx,a-coins[idx],coins);
        return notTake+take;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        return helper(n-1,amount,coins);
    }
    */
    
    // Memoization
    int helper(int idx, int a, vector<int> &coins, vector<vector<int>> &dp) {
        if(idx==0) {
            return a%coins[idx]==0;
        }
        if(dp[idx][a]!=-1) return dp[idx][a];
        if(a==0) return 1;
        int notTake=helper(idx-1,a,coins,dp);
        int take=0;
        if(coins[idx]<=a) take=helper(idx,a-coins[idx],coins,dp);
        return dp[idx][a]=notTake+take;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1,-1)); 
        return helper(n-1,amount,coins,dp);
    }
};