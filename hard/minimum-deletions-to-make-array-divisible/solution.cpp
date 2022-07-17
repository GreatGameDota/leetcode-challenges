class Solution
{
public:
    int minOperations(vector<int> &nums, vector<int> &numsDivide)
    {
        map<int, int> m;
        for (int &i : nums)
            m[i]++;
        int dels = 0;
        for (auto &p : m)
        {
            int valid = true;
            for (int &i : numsDivide)
            {
                if (i % p.first != 0)
                {
                    dels += p.second;
                    valid = false;
                    break;
                }
            }
            if (valid)
                return dels;
        }
        return -1;
    }
};