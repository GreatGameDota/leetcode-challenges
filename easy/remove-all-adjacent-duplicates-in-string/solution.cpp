class Solution {
public:
    string removeDuplicates(string s) {
        string res = "";
        res += s[0];
        for (int i = 1; i < s.length(); i++) {
            if (res.size() > 0 && s[i] == res.back())
                res.pop_back();
            else
                res += s[i];
        }
        return res;
    }
};