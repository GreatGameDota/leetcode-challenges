class Solution
{
public:
    int addDigits(int num)
    {
        if (num < 10)
            return num;

        int sum = 0;
        do
        {
            sum += num % 10;
            num /= 10;
        } while (num != 0);

        return addDigits(sum);
    }
};