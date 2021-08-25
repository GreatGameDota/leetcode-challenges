class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        vector<long> nums;
        long num = sqrt(c);

        while (num >= 0)
        {
            nums.push_back(num * num);
            nums.push_back(num * num);
            num--;
        }

        int start = 0;
        int end = nums.size() - 1;
        while (start <= end)
        {
            long res = nums[start] + nums[end];
            if (res == c)
                return true;
            else if (res > c)
                start++;
            else if (res < c)
                end--;
        }

        return false;
    }
};