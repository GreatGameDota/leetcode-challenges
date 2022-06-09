class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ret;

        for (int j = 0; j < numRows; j++)
        {
            ret.push_back(vector<int>(j + 1, 1));

            for (int i = 1; i < j; i++)
                ret[j][i] = ret[j - 1][i - 1] + ret[j - 1][i];
        }
        return ret;
    }
};