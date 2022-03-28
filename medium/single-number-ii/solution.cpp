class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> seen;
        int min = 0;
        for (int &i : nums)
        {
            seen[i]++;
        }
        for (auto p : seen)
        {
            if (p.second == 1)
            {
                min = p.first;
                break;
            }
        }
        return min;
    }
};