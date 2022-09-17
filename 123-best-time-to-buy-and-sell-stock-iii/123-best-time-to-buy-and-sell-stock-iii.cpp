class Solution {
public:
    /*
    // Recursion
    int helper(int i, int buy, int trans, int n, vector<int> &prices) {
        if(trans==0) return 0;
        if(i==n) return 0;
        int op1=INT_MIN, op2=INT_MIN;
        if(buy==0) op1=max(helper(i+1,0,trans,n,prices),-prices[i]+helper(i+1,1,trans,n,prices));
        if(buy==1) op2=max(helper(i+1,1,trans,n,prices), prices[i]+helper(i+1,0,trans-1,n,prices));
        return max(op1,op2);
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        return helper(0,0,2,n,prices);
    }
    */
    
    // Memoization
    int helper(int i, int buy, int trans, int n, vector<int> &prices, vector<vector<vector<int>>> &memo) {
        if(trans==0) return 0;
        if(i==n) return 0;
        int op1=INT_MIN, op2=INT_MIN;
        if(memo[i][buy][trans]!=-1) return memo[i][buy][trans];
        if(buy==0) op1=max(helper(i+1,0,trans,n,prices,memo),-prices[i]+helper(i+1,1,trans,n,prices,memo));
        if(buy==1) op2=max(helper(i+1,1,trans,n,prices,memo), prices[i]+helper(i+1,0,trans-1,n,prices,memo));
        return memo[i][buy][trans]=max(op1,op2);
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> memo(n,vector<vector<int>>(3, vector<int>(3,-1)));
        return helper(0,0,2,n,prices,memo);
    }
};