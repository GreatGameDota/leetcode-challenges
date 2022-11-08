class Solution {
public:
    string robotWithString(string s) {
        string t = "", ret = "";
        int i = 0;

        int freq[26] = {};
        for (char c : s)
            freq[c - 'a']++;

        for (int j = 0; j < 26; j++) {
            while (freq[j] != 0) {
                while (i < s.length() && (t.length() == 0 || j + 'a' < t.back())) {
                    t += s[i];
                    freq[s[i] - 'a']--;
                    i++;
                }

                ret += t.back();
                t.pop_back();
            }
        }
        reverse(t.begin(), t.end());
        return ret + t;
    }
};