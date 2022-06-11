class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        vector<int> ret;
        sort(potions.begin(), potions.end());

        for (int i = 0; i < spells.size(); i++)
        {
            long long tar = ceil(success / ((double)spells[i]));
            int start = 0, end = potions.size() - 1;
            int c = -1;
            while (start <= end)
            {
                int mid = (start + end) / 2;
                if (potions[mid] >= tar)
                {
                    c = mid;
                    end = mid - 1;
                }
                else
                    start = mid + 1;
            }
            if (c == -1)
                ret.push_back(0);
            else
                ret.push_back(potions.size() - c);
        }
        return ret;
    }
};