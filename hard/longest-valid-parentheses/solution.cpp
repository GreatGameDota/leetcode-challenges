class Solution
{
public:
    int longestValidParentheses(string s)
    {
        vector<bool> valid(s.length(), false);
        stack<int> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                st.push(i);
            }
            else if (!st.empty())
            {
                valid[i] = true;
                valid[st.top()] = true;
                st.pop();
            }
        }

        int sum = 0;
        int maxNum = 0;
        for (int i = 0; i < valid.size(); i++)
        {
            sum += valid[i];
            if (!valid[i])
            {
                maxNum = max(maxNum, sum);
                sum = 0;
            }
        }
        return max(maxNum, sum);
    }
};