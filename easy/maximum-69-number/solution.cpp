class Solution
{
public:
    int maximum69Number(int num)
    {
        int am = 0;
        int temp = num;
        int c = 0;
        while (temp)
        {
            if (temp % 10 == 6)
                am = 3 * pow(10, c);
            temp /= 10;
            c++;
        }

        return num + am;
    }
};