class Solution
{
    class Row
    {
    public:
        vector<int> row;
        int i;
        int strength;
        Row(vector<int> &r, int idx) : row{r}, i{idx}
        {
            strength = 0;
            for (int i = 0; i < r.size(); i++)
            {
                if (r[i] == 1)
                    strength++;
                else
                    break;
            }
        }
    };

    class myComparator
    {
    public:
        int operator()(const Row &r1, const Row &r2)
        {
            if (r1.strength == r2.strength)
                return r1.i > r2.i;
            return r1.strength > r2.strength;
        }
    };

public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        priority_queue<Row, vector<Row>, myComparator> heap;
        for (int i = 0; i < mat.size(); i++)
            heap.push(Row(mat[i], i));

        vector<int> ret;
        while (!heap.empty() && k != 0)
        {
            Row r = heap.top();
            heap.pop();
            k--;
            ret.push_back(r.i);
        }
        return ret;
    }
};