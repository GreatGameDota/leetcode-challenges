class Solution
{
public:
    bool isPossible(vector<int> &target)
    {
        priority_queue<int> h(target.begin(), target.end());
        long long sum = accumulate(target.begin(), target.end(), (long)0);

        while (!h.empty())
        {
            int tar = h.top();
            h.pop();
            if (tar == 1)
                continue;

            long long rsum = sum - tar;
            if (rsum >= tar || rsum == 0)
                return false;

            int tmp = tar;
            tar = tar % rsum == 0 ? rsum : tar % rsum;
            sum -= tmp - tar;

            if (tar != 1)
                h.push(tar);
        }
        return true;
    }
};