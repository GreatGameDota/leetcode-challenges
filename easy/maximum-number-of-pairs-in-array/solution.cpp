class Solution
{
public:
    vector<int> numberOfPairs(vector<int> &nums)
    {
        int seen[101] = {};
        for (int &i : nums)
            seen[i]++;
        int cnt = 0, cnt2 = 0;
        for (int i = 0; i < 101; i++)
        {
            cnt += seen[i] / 2;
            cnt2 += seen[i] % 2;
        }
        return {cnt, cnt2};
    }
};