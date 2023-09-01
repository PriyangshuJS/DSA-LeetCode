class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //  base case
        if( prices.size() == 1)
        {
            return 0; // as no profit will come
        }
       
    int ans = 0;
    int startdayprice = prices[0];
    int index = 0;
    while(index < prices.size())
        {
            int profitgot = 0;
            while(index < prices.size() - 1 && prices[index] <= prices[index+1] )
            {
                index++;
            }
            if( index < prices.size()  )
            {
            // so we must got a the last increasing stock day so sell it
            profitgot = prices[index] - startdayprice;
            if( index < prices.size() - 1)
            {
            startdayprice = prices[index + 1];
            }
            index++;
            ans = ans + profitgot;
            }
            
        }
        return ans;
        }
};