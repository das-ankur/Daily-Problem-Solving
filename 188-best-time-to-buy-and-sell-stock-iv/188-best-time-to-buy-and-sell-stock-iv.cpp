class Solution {
public:
    /*
    // Recursion
    int helper(int i, int buy, int tran, vector<int> &prices) {
        if(tran==0) return 0;
        if(i==prices.size()) return 0;
        if(buy==0) return max(helper(i+1,0,tran,prices), -prices[i]+helper(i+1,1,tran,prices));
        else return max(helper(i+1,1,tran,prices), prices[i]+helper(i+1,0,tran-1,prices));
    }
    int maxProfit(int k, vector<int>& prices) {
        return helper(0,0,k,prices);
    }
    */
    /*
    // Memoization
    int helper(int i, int buy, int tran, vector<int> &prices, vector<vector<vector<int>>> &memo) {
        if(tran==0 || i==prices.size()) return 0;
        if(memo[i][buy][tran]!=-1) return memo[i][buy][tran];
        if(buy==0) return memo[i][buy][tran]=max(helper(i+1,0,tran,prices,memo), -prices[i]+helper(i+1,1,tran,prices,memo));
        else return memo[i][buy][tran]=max(helper(i+1,1,tran,prices,memo), prices[i]+helper(i+1,0,tran-1,prices,memo));
    }
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>> memo(prices.size(), vector<vector<int>>(2, vector<int>(k+1,-1)));
        return helper(0,0,k,prices,memo);
    }
    */
    
    /*
    // Tabulation
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> table(n+1, vector<vector<int>>(2, vector<int>(k+1,0)));
        for(int i=n-1;i>=0;i--) {
            for(int buy=0;buy<=1;buy++) {
                for(int tran=1;tran<=k;tran++) {
                    if(buy==0) table[i][buy][tran]=max(table[i+1][0][tran], -prices[i]+table[i+1][1][tran]);
                    else table[i][buy][tran]=max(table[i+1][1][tran], prices[i]+table[i+1][0][tran-1]);
                }
            }
        }
        return table[0][0][k];
    }
    */
    
    // Space Optimization
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> prev(2, vector<int>(k+1,0));
        for(int i=n-1;i>=0;i--) {
            vector<vector<int>> curr(2, vector<int>(k+1,0));
            for(int buy=0;buy<=1;buy++) {
                for(int tran=1;tran<=k;tran++) {
                    if(buy==0) curr[buy][tran]=max(prev[0][tran], -prices[i]+prev[1][tran]);
                    else curr[buy][tran]=max(prev[1][tran], prices[i]+prev[0][tran-1]);
                }
            }
            prev=curr;
        }
        return prev[0][k];
    }
};