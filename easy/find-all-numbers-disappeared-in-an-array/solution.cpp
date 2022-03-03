class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            int n = nums[i];
            while (n > 0 && n <= size && nums[n - 1] != n)
                swap(n, nums[n - 1]);
        }

        vector<int> ret;
        for (int i = 0; i < size; i++)
            if (nums[i] != i + 1)
                ret.push_back(i + 1);

        return ret;
    }
};