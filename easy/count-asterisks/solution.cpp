class Solution
{
public:
    int countAsterisks(string s)
    {
        int cnt = 0, res = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '*' && cnt == 0)
                res++;

            if (s[i] == '|')
                cnt = (cnt + 1) % 2;
        }

        return res;
    }
};