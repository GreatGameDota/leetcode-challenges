class Solution
{
public:
    string removeStars(string s)
    {
        stack<char> st;
        for (char &c : s)
        {
            if (c == '*')
                st.pop();
            else
                st.push(c);
        }
        string ret = "";
        while (!st.empty())
        {
            ret += st.top();
            st.pop();
        }
        reverse(begin(ret), end(ret));
        return ret;
    }
};