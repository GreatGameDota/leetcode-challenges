class Solution
{
public:
    int maximumSum(vector<int> &nums)
    {
        unordered_map<int, int> m;
        int maxNum = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0, tmp = nums[i];
            while (tmp != 0)
            {
                sum += tmp % 10;
                tmp /= 10;
            }
            if (m[sum])
                maxNum = max(maxNum, nums[i] + nums[m[sum] - 1]);
            if (!m[sum] || nums[i] > nums[m[sum] - 1])
                m[sum] = i + 1;
        }
        return maxNum;
    }
};