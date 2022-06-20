class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        vector<int> num;
        int sz = 0;
        while (n != 0)
        {
            num.push_back(n & 1);
            n /= 2;
            sz++;
        }

        uint32_t val = 0;
        for (int i = num.size() - 1; i >= 0; i--)
            if (num[i])
                val += pow(2, num.size() - i + (31 - sz));
        return val;
    }
};