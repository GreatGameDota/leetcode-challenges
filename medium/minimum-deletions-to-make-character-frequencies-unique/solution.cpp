class Solution
{
public:
    int minDeletions(string s)
    {
        vector<int> freq(26, 0);
        for (char &c : s)
            freq[c - 'a']++;

        sort(freq.begin(), freq.end(), greater<>());

        int res = 0;
        for (int i = 1; i < 26; i++)
        {
            if (freq[i] == 0)
                break;
            if (freq[i] >= freq[i - 1])
            {
                int diff = min(freq[i], (freq[i] - freq[i - 1]) + 1);
                res += diff;
                freq[i] -= diff;
            }
        }

        return res;
    }
};