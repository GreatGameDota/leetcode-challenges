class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int idx = 0;
        int counter = 0;
        int curr = nums[0];
        for (int &i : nums)
        {
            if (i == curr && counter < 2)
            {
                nums[idx++] = i;
                counter++;
            }
            else if (i != curr)
            {
                curr = i;
                counter = 1;
                nums[idx++] = i;
            }
        }
        return idx;
    }
};