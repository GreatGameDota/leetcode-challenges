class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        unordered_map<int, int> seen;
        int max = INT_MIN;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                if (nums[i] > max)
                    max = nums[i];

            seen[nums[i]]++;
        }

        for (int i = 1; i <= nums.size(); i++)
            if (!seen[i])
                return i;
                
        return max + 1;
    }
};