class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        long start = 1, end = num;
        while (start <= end)
        {
            long mid = (start + end) / 2;
            int res = num / mid;
            if (res == mid && num % mid == 0)
                return true;
            else if (res > mid)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return false;
    }
};