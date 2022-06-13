class Solution
{
public:
    int distributeCookies(vector<int> &cookies, int k)
    {
        vector<int> buckets(k, 0);
        return backtrack(0, cookies, k, buckets);
    }

    int backtrack(int idx, vector<int> &nums, int k, vector<int> &buckets)
    {
        if (idx >= nums.size())
            return *max_element(buckets.begin(), buckets.end());

        int minNum = INT_MAX;
        for (int i = 0; i < k; i++)
        {
            buckets[i] += nums[idx];
            minNum = min(minNum, backtrack(idx + 1, nums, k, buckets));
            buckets[i] -= nums[idx];
        }
        return minNum;
    }
};