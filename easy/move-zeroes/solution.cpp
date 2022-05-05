class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                int c = 1;
                while (i < nums.size() - c)
                {
                    while (i < nums.size() - c && nums[i + c] != 0)
                    {
                        swap(nums[i], nums[i + c]);
                        i++;
                    }
                    c++;
                }
                return;
            }
        }
    }
};