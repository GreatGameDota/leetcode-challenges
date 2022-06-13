class Solution
{
public:
    double calculateTax(vector<vector<int>> &brackets, int income)
    {
        double tot = 0;
        int prev = -1;
        for (vector<int> &b : brackets)
        {
            if (prev == -1)
            {
                prev = brackets[0][0];
                tot += min(prev, income) * ((double)b[1] / 100);
                if (prev > income)
                    break;
            }
            else
            {
                tot += (min(b[0], income) - prev) * ((double)b[1] / 100);
                prev = b[0];
                if (b[0] > income)
                    break;
            }
        }
        return tot;
    }
};