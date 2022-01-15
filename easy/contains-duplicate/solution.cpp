class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> seen;
        for (int i : nums)
            if (!seen[i])
                seen[i] = 1;
            else
                return true;
        return false;
    }
};