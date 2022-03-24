class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Initial buying price is prices[0]
        int buy=prices[0];
        int profit=0;
        //The main aim is:
        // i) Minimize buying prize
        // ii) Maximizing profit
        for(int i=1;i<prices.size();i++) {
            int dif=prices[i]-buy;
            buy=buy<prices[i]?buy:prices[i];
            profit=profit>dif?profit:dif;
        }
        return profit;
    }
};