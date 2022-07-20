class Solution
{
public:
    int numMatchingSubseq(string s, vector<string> &words)
    {
        unordered_map<string, int> ptrs;
        for (int j = 0; j < words.size(); j++)
            ptrs[words[j]]++;

        int ret = 0;
        for (auto &p : ptrs)
        {
            int ptr = 0;
            for (int i = 0; i < s.length(); i++)
                if (p.first[ptr] == s[i])
                {
                    ptr++;
                    if (ptr == p.first.length())
                    {
                        ret += p.second;
                        break;
                    }
                }
        }

        return ret;
    }
};