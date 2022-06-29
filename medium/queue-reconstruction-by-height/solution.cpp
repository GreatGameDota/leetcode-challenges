class Solution
{
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>> &people)
    {
        vector<vector<int>> ret(people.size(), vector<int>(2, -1));

        sort(people.begin(), people.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[0] < b[0]; });

        for (int i = 0; i < people.size(); i++)
        {
            int idx = people[i][1];
            int j = 0, k = 0;
            while (j != idx)
            {
                if (ret[k][0] == -1 || ret[k][0] == people[i][0])
                    j++;
                k++;
            }
            while (ret[k][0] != -1)
            {
                k++;
            }
            ret[k] = people[i];
        }

        return ret;
    }
};