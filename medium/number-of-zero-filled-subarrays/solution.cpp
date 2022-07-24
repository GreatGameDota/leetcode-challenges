class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        long long cnt = 0;
        int end = 0;
        while (end < nums.size())
        {
            if (nums[end] == 0)
            {
                long long sz = 0;
                while (end < nums.size() && nums[end] == 0)
                {
                    end++;
                    sz++;
                }
                cnt += (sz * (sz + 1)) / 2;
            }
            else
                end++;
        }
        return cnt;
    }
};