class Solution
{
public:
    int wiggleMaxLength(vector<int> &nums)
    {
        if (nums.size() == 1)
            return 1;

        int length = 2;
        int prev = 0;
        if (nums[1] > nums[0])
            prev = 1;
        else if (nums[1] < nums[0])
            prev = 2;
        else
            length = 1;

        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] > nums[i - 1])
            {
                if (prev != 1)
                    length++;
                prev = 1;
            }
            else if (nums[i] < nums[i - 1])
            {
                if (prev != 2)
                    length++;
                prev = 2;
            }
        }
        return length;
    }
};