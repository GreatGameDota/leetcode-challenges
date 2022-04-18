class Solution
{
public:
    unordered_map<char, string> digits = {{'0', "Zero"}, {'1', "One"}, {'2', "Two"}, {'3', "Three"}, {'4', "Four"}, {'5', "Five"}, {'6', "Six"}, {'7', "Seven"}, {'8', "Eight"}, {'9', "Nine"}};
    unordered_map<char, string> tens = {{'1', "Ten"}, {'2', "Twenty"}, {'3', "Thirty"}, {'4', "Forty"}, {'5', "Fifty"}, {'6', "Sixty"}, {'7', "Seventy"}, {'8', "Eighty"}, {'9', "Ninety"}};
    unordered_map<string, string> other = {{"11", "Eleven"}, {"12", "Twelve"}, {"13", "Thirteen"}, {"14", "Fourteen"}, {"15", "Fifteen"}, {"16", "Sixteen"}, {"17", "Seventeen"}, {"18", "Eighteen"}, {"19", "Nineteen"}};
    unordered_map<int, string> expo = {{1, "Thousand"}, {2, "Million"}, {3, "Billion"}};

    string numberToWords(int num)
    {
        int i = 0;
        string ret = "";
        do
        {
            string res1 = grab(num);

            string t;
            if (res1.length() == 3)
                t = hundred(res1);
            else
                t = ten(res1);

            if (t != "" && i > 0)
            {
                t += " " + expo[i];
                if (ret != "")
                    t += " ";
            }

            ret = t + ret;

            i++;
        } while (num != 0);

        return ret;
    }

    string ten(string s)
    {
        int val = stoi(s);
        if (val < 10)
        {
            if (s.length() != 1 && s[0] == '0')
                return digits[s[1]];
            else
                return digits[s[0]];
        }
        else
        {
            if (other.count(s))
                return other[s];
            else if (s[1] == '0')
                return tens[s[0]];
            else
                return tens[s[0]] + " " + digits[s[1]];
        }
        return "";
    }

    string hundred(string s)
    {
        if (stoi(s) == 0)
            return "";

        string ret = "";
        if (s[0] != '0')
            ret += digits[s[0]] + " Hundred";

        string res = ten(s.substr(1, 2));

        if (res.compare("Zero") == 0)
            return ret;
        if (ret == "")
            return res;

        return ret + " " + res;
    }

    string grab(int &n)
    {
        string ret = "";
        for (int i = 0; i < 3; i++)
        {
            ret = (char)((n % 10) + '0') + ret;
            n /= 10;
            if (n == 0)
                break;
        }
        return ret;
    }
};