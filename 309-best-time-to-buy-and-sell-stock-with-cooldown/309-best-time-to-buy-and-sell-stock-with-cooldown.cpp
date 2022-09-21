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
};