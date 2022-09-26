class Solution {
public:
    int partitionString(string s) {
        bool freq[26] = {};
        int ret = 1;
        for (char &i : s) {
            if (freq[i - 'a']) {
                ret++;
                for (int i = 0; i < 26; i++)
                    freq[i] = 0;
            }
            freq[i - 'a'] = 1;
        }
        return ret;
    }
};