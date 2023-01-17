class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int profit=0, mini=prices[0], n=prices.size(), diff=0;
        for(int i=0; i<n; i++)
        {
            diff=prices[i]-mini;
            profit=max(diff, profit);
            mini=min(mini, prices[i]);
        }
        return profit;
    }
};