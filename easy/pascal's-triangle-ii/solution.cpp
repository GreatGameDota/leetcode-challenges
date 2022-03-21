class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> res(rowIndex + 1, 0);
        res[0] = 1;

        for (int i = 0; i < rowIndex; i++)
        {
            int idx = 1;
            int prev = -1;
            int prev2 = res[0];
            for (int j = 0; j < i; j++)
            {
                prev = prev2;
                prev2 = res[idx];

                res[idx++] = prev + prev2;
            }
            res[idx] = 1;
        }

        return res;
    }
};