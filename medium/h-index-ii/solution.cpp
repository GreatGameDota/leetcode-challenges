class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        for (int k = citations.size(); k > 0; k--)
        {
            int i = citations.size() - 1;
            int c = 0;
            while (i >= 0 && citations[i--] >= k && c < k)
                c++;

            if (c == k)
                return k;
        }
        return 0;
    }
};