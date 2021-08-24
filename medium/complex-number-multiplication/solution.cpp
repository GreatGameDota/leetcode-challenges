#include <string>
class Solution
{
public:
    string complexNumberMultiply(string num1, string num2)
    {
        int n1, n2, n3, n4;
        parseString(num1, n1, n2);
        parseString(num2, n3, n4);

        int res1 = n1 * n3;
        int res2 = n1 * n4;
        int res3 = n2 * n3;
        int res4 = n2 * n4 * -1;

        int final1 = res1 + res4;
        int final2 = res2 + res3;

        return to_string(final1) + "+" + to_string(final2) + "i";
    }

    void parseString(string num, int &num1, int &num2)
    {
        string n1 = "", n2 = "";
        char c = num[0];
        bool neg = ((c == '-') ? true : false);
        int i = 0;

        if (neg)
        {
            c = num[1];
            i = 1;
        }

        while (c != '+' && c != '-')
        {
            c = num[i++];

            if (c != '+' && c != '-')
                n1 += c;
        }

        num1 = stoi(n1);

        if (neg)
            num1 *= -1;

        neg = ((c == '-') ? true : false);

        while (c != 'i')
        {
            c = num[i++];
            if (c != 'i')
                n2 += c;
        }

        num2 = stoi(n2);

        if (neg)
            num2 *= -1;
    }
};