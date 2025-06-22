class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++){
            // Buy of stocks
            int costStocks=prices[i]-mini;
            // Max profit of stocks
            profit=max(profit,costStocks);
            // Minimum buy of stocks before
            mini=min(mini,prices[i]);
        }
        return profit;
    }
};