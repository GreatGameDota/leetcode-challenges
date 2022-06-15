class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int totalProfit = 0;
        int buy = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            buy = min(buy, prices[i]);

            int profit = prices[i] - buy;
            totalProfit += profit;
            if (profit > 0)
                buy = prices[i];
        }

        return totalProfit;
    }
};