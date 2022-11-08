class Solution {
public:
    string makeGood(string s) {
        string ret = "";
        for (int i = 0; i < s.length(); i++) {
            if (i < s.length() - 1 && abs(s[i + 1] - s[i]) == 32)
                i++;
            else if (abs(s[i] - ret.back()) == 32)
                ret.pop_back();
            else
                ret += s[i];
        }
        return ret;
    }
};