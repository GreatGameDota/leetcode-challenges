class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string max = "";
        int i = 1;

        if (strs.size() == 1)
            return strs[0];

        while (true)
        {
            if (i > strs[0].length())
                if (max.length() >= 1)
                    return max.substr(0, strs[0].length());
                else
                    return "";

            max = strs[0].substr(0, i);
            for (int j = 1; j < strs.size(); j++)
            {
                if (i > strs[j].length())
                    if (max.length() >= 1)
                        return max.substr(0, strs[j].length());
                    else
                        return "";
                if (strs[j].substr(0, i) != max)
                {
                    if (max.length() >= 1)
                        return max.substr(0, max.length() - 1);
                    else
                        return "";
                }
            }
            i++;
        }
    }
};