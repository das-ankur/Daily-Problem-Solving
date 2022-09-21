class Solution {
public:
    /*
    // Recursion
    int helper(int i, int buy, vector<int> &prices) {
        if(i>=prices.size()) return 0;
        if(buy==0) return max(helper(i+1,0,prices), -prices[i]+helper(i+1,1,prices));
        else return max(helper(i+1,1,prices), prices[i]+helper(i+2,0,prices));
    }
    int maxProfit(vector<int>& prices) {
        return helper(0,0,prices);
    }*/
    
    /*
    // Memoization
    int helper(int i, int buy, vector<int> &prices,vector<vector<int>> &memo) {
        if(i>=prices.size()) return 0;
        if(memo[i][buy]!=-1) return memo[i][buy];
        if(buy==0) return memo[i][buy]=max(helper(i+1,0,prices,memo), -prices[i]+helper(i+1,1,prices,memo));
        else return memo[i][buy]=max(helper(i+1,1,prices,memo), prices[i]+helper(i+2,0,prices,memo));
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> memo(prices.size(), vector<int>(2,-1));
        return helper(0,0,prices,memo);
    }
    */
    
    // Tabulation
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> table(n+2, vector<int>(2,0));
        for(int i=n-1;i>=0;i--) {
            for(int buy=1;buy>=0;buy--) {
                if(buy==0) table[i][buy]=max(table[i+1][0], -prices[i]+table[i+1][1]);
                else table[i][buy]=max(table[i+1][1], prices[i]+table[i+2][0]);
            }
        }
        return table[0][0];
    }
};