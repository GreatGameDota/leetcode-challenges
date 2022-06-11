class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        int sum = 0;
        for (int &i : nums)
            sum += i;
        int tar = sum - x;
        if (tar < 0)
            return -1;

        int maxNum = -1;

        sum = 0;
        int start = 0, end = 0;
        while (end < nums.size())
        {
            sum += nums[end];

            while (sum > tar)
                sum -= nums[start++];

            if (sum == tar)
                if (end - start + 1 > maxNum)
                    maxNum = end - start + 1;

            end++;
        }

        return maxNum == -1 ? -1 : nums.size() - maxNum;
    }
};