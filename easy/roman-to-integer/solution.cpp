class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int ret = 0;

        for (int i = 0; i < s.length(); i++)
        {
            int val = map[s[i]];
            if (i < s.length() - 1)
            {
                int val2 = map[s[i + 1]];
                if (val2 > val)
                {
                    ret += val2 - val;
                    i++;
                }
                else
                    ret += val;
            }
            else
                ret += val;
        }

        return ret;
    }
};