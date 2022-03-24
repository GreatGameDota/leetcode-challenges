class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        sort(nums.begin(), nums.end());
        
        int max = 1;
        int seq = 1;
        int prev = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            int n = nums[i];
            if (prev == INT_MIN)
                prev = n;
            else
            {
                if (prev + 1 == n)
                {
                    seq++;
                    if (seq > max)
                        max = seq;
                }
                else
                    seq = 1;
                prev = n;
                while (i < nums.size() && nums[i] == n)
                    i++;
                i--;
            }
        }

        return max;
    }
};