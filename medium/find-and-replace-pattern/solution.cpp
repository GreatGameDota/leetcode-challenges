class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        string pat = "";
        int freq[26] = {};
        int tot = 0;
        for (char &c : pattern) {
            if (!freq[c - 'a'])
                freq[c - 'a'] = ++tot;
            pat += freq[c - 'a'] + '0';
            pat += "-";
        }
        
        vector<string> ret;
        int max = tot;
        for (string &s : words) {
            string _pat = "";
            for (char &c : s) {
                if (freq[c - 'a'] <= max)
                    freq[c - 'a'] = ++tot;

                _pat += (freq[c - 'a'] - max) + '0';
                _pat += "-";
            }
            max = tot;
            if (pat.compare(_pat) == 0)
                ret.push_back(s);
        }
        
        return ret;
    }
};