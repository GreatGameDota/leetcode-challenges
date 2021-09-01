class Solution
{
public:
    int arrayNesting(vector<int> &nums)
    {
        int max = 0;

        vector<int> seen;
        for (int i = 0; i < nums.size(); i++)
            seen.push_back(false);

        for (int i = 0; i < nums.size(); i++)
        {
            int idx = i;
            int count = 0;

            while (!seen[idx])
            {
                seen[idx] = true;
                idx = nums[idx];
                count++;
            }

            if (count > max)
                max = count;
        }

        return max;
    }
};