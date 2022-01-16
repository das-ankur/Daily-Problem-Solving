class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
        // Brute Force
        // Time COmplexcity: O(n^2)
        int profit=0;
        int n=prices.size();
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                int temp=prices[j]-prices[i];
                if(temp>profit) 
                    profit=temp;
            }
        }
        return profit;
        */
        // Dynamic Programming : Explanation - https://leetcode.com/media/original_images/121_profit_graph.png
        // Focus on the peak and valley of the graph and try to memorize maximum profit for each day
        // Time Complexcity: O(n)
        int minprice=INT_MAX;
        int maxprice=0;
        int n=prices.size();
        for(int i=0;i<n;i++) {
            if(prices[i]<minprice)
                minprice=prices[i];
            else if(prices[i]-minprice>maxprice)
                maxprice=prices[i]-minprice;
        }
        return maxprice;
    }
};