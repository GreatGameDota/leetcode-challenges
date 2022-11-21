class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        for (int i = 0; i < s.length(); i++) {
            if (st.size() != 0 && st.top().first == s[i]) {
                st.top().second++;
            } else {
                if (st.size() > 0 && st.top().second >= k) {
                    int am = st.top().second % k;
                    char c = st.top().first;
                    st.pop();
                    if (am != 0)
                        st.push({c,am});
                    i--;
                } else {
                    st.push({s[i],1});
                }
            }
        }
        if (st.size() > 0 && st.top().second >= k) {
            int am = st.top().second % k;
            char c = st.top().first;
            st.pop();
            if (am != 0)
                st.push({c,am});
        }

        string res = "";
        while (!st.empty()) {
            for (int i = 0; i < st.top().second; i++)
                res += st.top().first;
            st.pop();
        }
        reverse(begin(res), end(res));
        return res;
    }
};