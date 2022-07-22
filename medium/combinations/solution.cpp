class Solution
{
public:
    vector<vector<int>> ret;
    vector<vector<int>> combine(int n, int k)
    {
        vector<int> curr;
        backtrack(n, k, 1, curr);
        return ret;
    }

    void backtrack(int n, int k, int idx, vector<int> &curr)
    {
        if (curr.size() == k)
        {
            ret.push_back(curr);
            return;
        }

        for (int i = idx; i <= n; i++)
        {
            curr.push_back(i);
            backtrack(n, k, i + 1, curr);
            curr.pop_back();
        }
    }
};