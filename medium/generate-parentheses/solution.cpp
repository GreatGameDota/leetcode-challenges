class Solution
{
public:
    vector<string> ret;
    vector<string> generateParenthesis(int n)
    {
        string curr = "";
        backtrack(n, curr, 0, 0);
        return ret;
    }

    void backtrack(int n, string &curr, int left, int right)
    {
        if (right == n)
        {
            ret.push_back(curr);
            return;
        }

        if (left < n)
        {
            curr += "(";
            backtrack(n, curr, left + 1, right);
            curr.pop_back();
        }

        if (right < left)
        {
            curr += ")";
            backtrack(n, curr, left, right + 1);
            curr.pop_back();
        }
    }
};