class Solution
{
public:
    int minMaxGame(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];

        vector<int> newNums;

        int c = 0;
        for (int i = 0; i < nums.size(); i += 2)
        {
            if (c % 2 == 0)
            {
                newNums.push_back(min(nums[i], nums[i + 1]));
            }
            else
            {
                newNums.push_back(max(nums[i], nums[i + 1]));
            }
            c++;
        }
        return minMaxGame(newNums);
    }
};