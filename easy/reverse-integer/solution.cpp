class Solution
{
public:
    int reverse(int x)
    {
        int num = x;
        int count = 0;
        while (num != 0)
        {
            count++;
            num /= 10;
        }

        bool neg;
        if (count < 10)
        {
            neg = x < 0 ? true : false;
            x *= neg ? -1 : 1;
        }
        else if (x >= 2147483647)
            return 0;
        else if (x < -2147483647)
            return 0;
        else
        {
            neg = x < 0 ? true : false;
            x *= neg ? -1 : 1;
        }

        num = x;
        int ret = 0;
        int re = 0;

        while (num != 0)
        {
            count--;
            re = num % 10;
            num /= 10;
            if (ret + re * pow(10, count) >= 2147483647)
                return 0;
            ret += re * pow(10, count);
        }

        if (neg)
            return -ret;
        else
            return ret;
    }
};