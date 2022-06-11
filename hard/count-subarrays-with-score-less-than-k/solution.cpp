class Solution
{
public:
    long long countSubarrays(vector<int> &nums, long long k)
    {
        long long c = 0;
        long long sum = 0;
        int start = 0, end = 0;
        while (end < nums.size())
        {
            sum += nums[end];

            while ((long long)sum * ((end - start) + 1) >= k)
                sum -= nums[start++];

            c += (end - start) + 1;
            end++;
        }
        return c;
    }
};