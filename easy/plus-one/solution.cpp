class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        if (digits.back() < 9)
        {
            digits.back() = digits.back() + 1;
        }
        else
        {
            int i = digits.size() - 1;
            while (i >= 0 && digits[i] == 9)
            {
                digits[i] = 0;
                i--;
            }
            if (i > -1)
                digits[i]++;
            else
            {
                digits[0] = 1;
                digits.push_back(0);
            }
        }
        return digits;
    }
};