class Solution
{
public:
    int jobScheduling(vector<int> &startTime, vector<int> &endTime, vector<int> &profit)
    {
        vector<int> idx;
        for (int i = 0; i < startTime.size(); i++)
            idx.push_back(i);
        sort(begin(idx), end(idx), [&](const int &a, const int &b)
             { return endTime[a] < endTime[b]; });
        sort(begin(endTime), end(endTime));

        // dp[i] current maximum profit at element ending at endTime[i]
        vector<int> dp(endTime.size(), 0);
        dp[0] = profit[idx[0]];
        for (int i = 1; i < idx.size(); i++)
        {
            auto p = upper_bound(begin(endTime), end(endTime), startTime[idx[i]]);
            int index = prev(p) - begin(endTime);

            dp[i] = max(dp[i - 1], profit[idx[i]] + (index > -1 ? dp[index] : 0));
        }

        return dp.back();
    }
};