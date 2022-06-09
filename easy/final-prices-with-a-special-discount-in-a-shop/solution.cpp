class Solution
{
public:
    vector<int> finalPrices(vector<int> &prices)
    {
        stack<int> mono;
        for (int i = 0; i < prices.size(); i++)
        {
            while (!mono.empty() && prices[mono.top()] >= prices[i])
            {
                prices[mono.top()] -= prices[i];
                mono.pop();
            }
            mono.push(i);
        }
        return prices;
    }
};