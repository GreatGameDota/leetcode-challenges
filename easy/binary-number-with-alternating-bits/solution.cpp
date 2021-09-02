class Solution
{
public:
    bool hasAlternatingBits(int n)
    {
        string binary = "";
        int num = n;
        while (num)
        {
            int re = num % 2;
            num /= 2;
            binary = to_string(re) + move(binary);
        }

        for (int i = 0; i < binary.length(); i++)
            if (i < binary.length() - 1)
                if (binary[i + 1] == binary[i])
                    return false;

        return true;
    }
};