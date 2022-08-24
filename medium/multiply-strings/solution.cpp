class Solution
{
public:
    string multiply(string num1, string num2)
    {
        if ((num2.length() == 1 && num2[0] == '0') || (num1.length() == 1 && num1[0] == '0'))
            return "0";
        vector<string> mult;
        for (int i = num2.length() - 1; i >= 0; i--)
        {
            string str = "";
            int rem = 0;
            for (int j = num1.length() - 1; j >= 0; j--)
            {
                int ret = (num1[j] - '0') * (num2[i] - '0') + rem;
                if (ret > 9)
                {
                    rem = ret / 10;
                    ret %= 10;
                }
                else
                    rem = 0;
                str += ret + '0';
            }
            if (rem != 0)
                str += rem + '0';
            reverse(str.begin(), str.end());
            for (int j = 0; j < num2.size() - i - 1; j++)
                str += "0";
            mult.push_back(str);
        }

        string ret = "";
        int rem = 0;
        while (mult.back().length() > 0)
        {
            int res = rem;
            for (string &s : mult)
            {
                if (s.length() > 0)
                {
                    res += s.back() - '0';
                    s.pop_back();
                }
            }
            if (res > 9)
            {
                rem = res / 10;
                res %= 10;
            }
            else
                rem = 0;
            ret += res + '0';
        }
        if (rem != 0)
            ret += rem + '0';
        reverse(ret.begin(), ret.end());
        return ret;
    }
};