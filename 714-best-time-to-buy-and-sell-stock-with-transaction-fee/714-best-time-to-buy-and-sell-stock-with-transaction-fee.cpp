class Solution {
public:
    /*
    // Recursion
    int helper(int i, int buy, int n, int fee, vector<int> &prices) {
        if(i==n) return 0;
        int op1=INT_MIN, op2=INT_MIN;
        if(buy==0) op1=max(helper(i+1,0,n,fee,prices), -prices[i]+helper(i+1,1,n,fee,prices));
        else op2=max(helper(i+1,1,n,fee,prices), -fee+prices[i]+helper(i+1,0,n,fee,prices));
        return max(op1,op2);
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        return helper(0,0,n,fee,prices);
    }
    */
    
    // Memoization
    int helper(int i, int buy, int fee, vector<int> &prices, vector<vector<int>> &memo) {
        if(i==prices.size()) return 0;
        if(memo[i][buy]!=-1) return memo[i][buy];
        if(buy==0) return memo[i][buy]=max(helper(i+1,0,fee,prices,memo), -prices[i]+helper(i+1,1,fee,prices,memo));
        else return memo[i][buy]=max(helper(i+1,1,fee,prices,memo), -fee+prices[i]+helper(i+1,0,fee,prices,memo));
    }
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>> memo(prices.size(), vector<int>(2,-1));
        return helper(0,0,fee,prices,memo);
    }
};