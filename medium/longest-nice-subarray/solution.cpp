class Solution
{
public:
    int longestNiceSubarray(vector<int> &nums)
    {
        int ret = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            int sz = 2;
            while (i + sz <= nums.size())
            {
                if (!check(i, i + sz, nums))
                    break;
                else
                    ret = max(ret, sz);
                sz++;
            }
        }
        return ret;
    }

    bool check(int s, int e, vector<int> &n)
    {
        for (int i = s; i < e; i++)
            for (int j = i + 1; j < e; j++)
                if (n[i] & n[j])
                    return false;
        return true;
    }
};