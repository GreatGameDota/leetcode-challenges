class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int reach = 0, prev = 0, n = 0, i = 0;
        while (prev < nums.size() - 1)
        {
            reach = max(reach, i + nums[i]);
            if (i == prev)
            {
                prev = reach;
                n++;
            }
            i++;
        }
        return n;
    }
};