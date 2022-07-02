class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int zero = -1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                nums[i] = 1;
                if (zero == -1)
                    zero = i;
                else
                    return vector<int>(nums.size(), 0);
            }
            nums[i] *= nums[i - 1];
        }

        vector<int> ret(nums.size(), 0);
        if (zero != -1)
        {
            ret[zero] = nums.back();
            return ret;
        }

        ret[0] = nums.back() / nums[0];
        for (int i = 1; i < nums.size(); i++)
            ret[i] = nums.back() / nums[i] * nums[i - 1];

        return ret;
    }
};