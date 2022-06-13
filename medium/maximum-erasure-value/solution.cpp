class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        vector<int> sums = nums;
        for (int i = 1; i < nums.size(); i++)
            sums[i] += sums[i - 1];

        int sum = 0;
        unordered_map<int, int> m;
        int start = 0, end = 0;
        int maxNum = INT_MIN;
        while (end < nums.size())
        {

            int idx = m[nums[end]];
            if (idx && idx >= start)
            {
                maxNum = max(maxNum, sum);
                if (start == 0)
                    sum -= sums[idx - 1];
                else
                    sum -= sums[idx - 1] - sums[start - 1];
                start = idx;
            }

            sum += nums[end];
            m[nums[end]] = end + 1;
            end++;
        }
        maxNum = max(maxNum, sum);
        return maxNum;
    }
};