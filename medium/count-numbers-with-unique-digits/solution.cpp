class Solution
{
public:
    int count = 1;
    int countNumbersWithUniqueDigits(int n)
    {
        for (int i = 1; i < 10; i++)
        {
            vector<char> s(10, 0);
            s[i] = 1;
            string curr = "";
            curr += (char)(i + '0');
            backtrack(curr, n, s);
        }
        return count;
    }
    void backtrack(string &curr, int n, vector<char> &seen)
    {
        if (curr.size() == n + 1)
            return;

        count++;

        for (int i = 0; i < 10; i++)
        {
            if (!seen[i])
            {
                curr += (char)i + '0';
                seen[i] = 1;
                backtrack(curr, n, seen);
                seen[i] = 0;
                curr.pop_back();
            }
        }
    }
};