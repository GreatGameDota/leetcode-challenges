class Solution
{
public:
    int myAtoi(string s)
    {
        char c = s[0];
        int i = 1;
        bool neg = false;
        while (c && c == ' ')
        {
            c = s[i++];
        }

        if (c == '+')
            c = s[i++];

        else if (c == '-')
        {
            neg = true;
            c = s[i++];
        }

        if (c < 48 || c > 57)
            return 0;

        while (c && c == '0')
            c = s[i++];

        if (!c || (c < 48 || c > 57))
            return 0;

        stack<int> stack;
        while (c && (c >= 48 && c <= 57))
        {
            stack.push(c - 48);
            c = s[i++];
        }

        long long num = stack.top();
        stack.pop();
        int size = stack.size();
        for (int i = 0; i < size; i++)
        {
            if (pow(10, i + 1) > 2147483648)
            {
                num = 2147483649;
                break;
            }
            else
                num += pow(10, i + 1) * stack.top();
            stack.pop();
        }

        if (num >= 2147483648)
        {
            if (neg)
            {
                num = 2147483648;
                num *= -1;
            }
            else
                num = 2147483647;
        }
        else if (neg)
            num *= -1;
        return num;
    }
};