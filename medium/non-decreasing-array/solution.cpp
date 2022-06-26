class Solution
{
public:
    bool checkPossibility(vector<int> &nums)
    {
        int prev2 = INT_MIN, prev1 = INT_MIN, curr;
        int cnt = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            curr = nums[i];
            if (prev1 == INT_MIN)
                prev1 = nums[i - 1];

            int diff = curr - prev1;
            if (diff < 0)
            {
                if (cnt++ > 0)
                    return false;

                if (nums[i] >= prev2)
                    prev1 = prev2;
                else
                    curr = prev1;
            }
            prev2 = prev1;
            prev1 = curr;
        }
        return true;
    }
};