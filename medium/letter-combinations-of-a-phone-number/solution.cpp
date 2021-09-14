class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ret;
        vector<string> strings = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        if (digits.length() == 0)
            return ret;

        int length = 1;
        for (int i = 0; i < digits.length(); i++)
        {
            if (digits[i] - 48 == 7 || digits[i] - 48 == 9)
                length *= 4;
            else
                length *= 3;
        }

        int offset = 1;
        for (int k = 0; k < digits.length(); k++)
        {
            if (k != 0)
                offset *= strings[digits[k] - 48 - 2].length();
        }
        int old_off = offset;

        for (int i = 0; i < length; i++)
        {
            string s = "";
            offset = old_off;

            for (int j = 0; j < digits.length(); j++)
            {
                string letters = strings[digits[j] - 48 - 2];
                s += letters[(i / offset) % letters.length()];
                if (j != digits.length() - 1)
                    offset /= strings[digits[j + 1] - 48 - 2].length();
            }

            ret.push_back(s);
        }

        return ret;
    }
};