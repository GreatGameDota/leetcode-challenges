class Solution
{
public:
    bool canChange(string start, string target)
    {
        int p1 = 0, p2 = 0;
        char curr1 = ' ', curr2 = ' ';
        while (p1 < start.length() && p2 < target.length())
        {
            if (curr1 == ' ' && start[p1] != '_')
                curr1 = start[p1];
            if (curr2 == ' ' && target[p2] != '_')
                curr2 = target[p2];

            if (curr1 != ' ' && curr2 != ' ')
            {
                if (curr1 == 'R' && curr2 == 'L')
                    return false;
                if (curr1 == 'R' && p2 < p1)
                    return false;
                if (curr1 == 'L' && p2 > p1)
                    return false;

                curr1 = ' ';
                curr2 = ' ';
            }

            if (curr1 == ' ')
                p1++;
            if (curr2 == ' ')
                p2++;
        }
        while (p1 < start.length())
            if (start[p1++] != '_')
                return false;
        while (p2 < target.length())
            if (target[p2++] != '_')
                return false;
        return true;
    }
};