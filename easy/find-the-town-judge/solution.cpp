class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        if (n == 1 && trust.size() == 0)
            return 1;

        map<int, int> count;
        for (vector<int> tr : trust)
        {
            count[tr[0]]--;
            count[tr[1]]++;
        }

        for (auto pair : count)
        {
            if (pair.second == n - 1)
            {
                return pair.first;
            }
        }

        return -1;
    }
};