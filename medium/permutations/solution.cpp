class Solution
{
public:
    vector<vector<int>> ret;
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<int> curr;
        backtrack(nums, curr);
        return ret;
    }

    void backtrack(vector<int> &n, vector<int> &curr)
    {
        if (curr.size() == n.size())
        {
            ret.push_back(curr);
            return;
        }

        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] != -11)
            {
                curr.push_back(n[i]);
                n[i] = -11;
                backtrack(n, curr);
                n[i] = curr.back();
                curr.pop_back();
            }
        }
    }
};