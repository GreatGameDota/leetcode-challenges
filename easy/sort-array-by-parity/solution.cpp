class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int count = 0;
        for (int &i : nums)
            if (i % 2 == 0)
                count++;

        int ptr = count;
        for (int i = 0; i < count; i++)
        {
            while (nums[i] % 2 == 1)
            {
                int temp = nums[i];
                nums[i] = nums[ptr];
                nums[ptr++] = temp;
            }
        }
        return nums;
    }
};