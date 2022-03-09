class Solution
{
public:
    vector<vector<int>> ret;
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<int> comb;
        backtrack(k, n, 1, comb);
        return ret;
    }

    void backtrack(int k, int target, int idx, vector<int> &comb)
    {
        if (comb.size() > k)
            return;
        if (target == 0 && comb.size() == k)
        {
            ret.push_back(comb);
            return;
        }

        for (int i = idx; i <= 9; i++)
        {
            comb.push_back(i);
            backtrack(k, target - i, i + 1, comb);
            comb.pop_back();
        }
    }
};