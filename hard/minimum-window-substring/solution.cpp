class Solution
{
public:
    string minWindow(string s, string t)
    {
        unordered_map<int, int> m;
        for (char &c : t)
            m[c]++;

        int startIdx = -1;
        int minNum = INT_MAX;
        int start = 0, end = 0, sum = t.length();
        while (start < s.length() && !m.count(s[start]))
        {
            start++;
            end++;
        }

        while (end < s.length())
        {
            if (m.count(s[end]))
            {
                m[s[end]]--;
                if (m[s[end]] >= 0)
                    sum--;
            }

            if (sum == 0)
            {
                while (start <= end && sum == 0)
                {
                    if (m.count(s[start]))
                    {
                        m[s[start]]++;
                        if (m[s[start]] > 0)
                            sum++;
                    }

                    start++;
                }
                if (end - start + 2 < minNum)
                {
                    minNum = end - start + 2;
                    startIdx = start - 1;
                }
            }
            end++;
        }
        return startIdx == -1 ? "" : s.substr(startIdx, minNum);
    }
};