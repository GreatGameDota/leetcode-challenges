class Solution
{
public:
    bool makesquare(vector<int> &matchsticks)
    {
        int sum = accumulate(matchsticks.begin(), matchsticks.end(), 0);
        if (sum % 4 != 0)
            return false;
        sort(matchsticks.begin(), matchsticks.end(), greater<>());
        vector<int> buckets(4, 0);
        return backtrack(0, sum / 4, matchsticks, buckets);
    }

    bool backtrack(int idx, int tar, vector<int> &nums, vector<int> &buckets)
    {
        if (idx >= nums.size())
        {
            for (int i = 1; i < buckets.size(); i++)
                if (buckets[i] != buckets[i - 1])
                    return false;
            return true;
        }

        for (int i = 0; i < 4; i++)
        {
            if (buckets[i] + nums[idx] <= tar)
            {
                for (int j = i - 1; j >= 0; j--)
                    if (buckets[i] == buckets[j])
                    {
                        if (++i == 4)
                            return false;
                        break;
                    }

                buckets[i] += nums[idx];
                if (backtrack(idx + 1, tar, nums, buckets))
                    return true;
                buckets[i] -= nums[idx];
            }
        }
        return false;
    }
};