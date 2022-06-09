class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> ret(rowIndex + 1, 1);

        for (int i = 0; i <= rowIndex; i++)
        {
            int prev = ret[0];
            for (int j = 1; j < i; j++)
            {
                int tmp = ret[j];
                ret[j] += prev;
                prev = tmp;
            }
        }
        return ret;
    }
};