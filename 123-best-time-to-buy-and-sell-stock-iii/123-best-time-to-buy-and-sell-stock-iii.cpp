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
    
    /*
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
    */
    
    // Tabulation
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> table(n+1,vector<vector<int>>(2, vector<int>(3,-1)));
        for(int i=0;i<=n;i++) {
            for(int buy=0;buy<2;buy++) table[i][buy][0]=0;
        }
        for(int buy=0;buy<2;buy++) {
            for(int trans=1;trans<=2;trans++) table[n][buy][trans]=0;
        }
        for(int i=n-1;i>=0;i--) {
            for(int buy=0;buy<=1;buy++) {
                for(int trans=1;trans<=2;trans++) {
                    int op1=INT_MIN, op2=INT_MIN;
                    if(buy==0) op1=max(table[i+1][0][trans],-prices[i]+table[i+1][1][trans]);
                    if(buy==1) op2=max(table[i+1][1][trans], prices[i]+table[i+1][0][trans-1]);
                    table[i][buy][trans]=max(op1,op2);
                }
            }
        }
        return table[0][0][2];
    }
    
    /*
    // Space Optimization
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> prev(2, vector<int>(3,-1));
        for(int i=0;i<=n;i++) {
            for(int buy=0;buy<2;buy++) prev[buy][0]=0;
        }
        for(int buy=0;buy<2;buy++) {
            for(int trans=1;trans<=2;trans++) prev[buy][trans]=0;
        }
        for(int i=n-1;i>=0;i--) {
            vector<vector<int>> curr(2, vector<int>(3,-1));
            for(int buy=0;buy<=1;buy++) {
                for(int trans=1;trans<=2;trans++) {
                    int op1=INT_MIN, op2=INT_MIN;
                    if(buy==0) op1=max(prev[0][trans],-prices[i]+prev[1][trans]);
                    if(buy==1) op2=max(prev[1][trans], prices[i]+prev[0][trans-1]);
                    curr[buy][trans]=max(op1,op2);
                }
            }
            prev=curr;
        }
        return prev[0][2];
    }
    */
};