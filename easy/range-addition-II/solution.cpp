class Solution
{
public:
    int maxCount(int m, int n, vector<vector<int>> &ops)
    {
        if (ops.size() == 0)
            return m * n;

        int min1 = ops[0][0];
        int min2 = ops[0][1];

        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i][0] < min1)
                min1 = ops[i][0];
            if (ops[i][1] < min2)
                min2 = ops[i][1];
        }

        return min1 * min2;
    }
};