class Solution
{
public:
    string largestPalindromic(string num)
    {
        map<int, int> m;
        for (char &c : num)
            m[c - '0']++;
        int mid = -1;
        string ret = "";
        bool zero = true;

        for (auto &p : m)
        {
            for (int i = 0; i < p.second / 2; i++)
            {
                ret += '0' + p.first;
                if (p.first != 0)
                    zero = false;
            }
            if (p.second % 2 == 1)
                mid = max(mid, p.first);
        }

        if (zero)
            return mid == -1 ? "0" : to_string(mid);

        string rev = ret;
        reverse(rev.begin(), rev.end());
        return mid == -1 ? rev + ret : rev + (char)('0' + mid) + ret;
    }
};