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
    
    /*
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
    */
    
    /*
    // Tabulation
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>> table(n+1, vector<int>(2,0));
        for(int i=n-1;i>=0;i--) {
            for(int buy=1;buy>=0;buy--) {
                if(buy==0) table[i][buy]=max(table[i+1][0], -prices[i]+table[i+1][1]);
                else table[i][buy]=max(table[i+1][1], -fee+prices[i]+table[i+1][0]);
            }
        }
        return table[0][0];
    }
    */
    
    // Space Optimization
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<int> prev(2,0);
        for(int i=n-1;i>=0;i--) {
            vector<int> curr(2,0);
            for(int buy=1;buy>=0;buy--) {
                if(buy==0) curr[buy]=max(prev[0], -prices[i]+prev[1]);
                else curr[buy]=max(prev[1], -fee+prices[i]+prev[0]);
            }
            prev=curr;
        }
        return prev[0];
    }
};