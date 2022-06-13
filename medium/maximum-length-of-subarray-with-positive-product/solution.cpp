class Solution
{
public:
    int getMaxLen(vector<int> &nums)
    {
        int start = 0, end = 0, firstneg = -1;
        int maxNum = 0;
        int cnt = 0;

        while (end < nums.size())
        {
            while (end < nums.size() && nums[end] == 0)
            {
                end++;
                start = end;
                cnt = 0;
                firstneg = -1;
            }
            if (end == nums.size())
                break;

            cnt += nums[end] > 0 ? 0 : 1;
            if (nums[end] < 0 && firstneg == -1)
                firstneg = end;

            if (!(cnt & 1))
                maxNum = max(maxNum, end - start + 1);
            else if (firstneg != -1)
                maxNum = max(maxNum, end - firstneg);

            end++;
        }
        return maxNum;
    }
};