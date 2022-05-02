class Solution
{
public:
    string getHint(string secret, string guess)
    {
        int c1 = 0, c2 = 0;
        unordered_map<char, int> seen;
        for (int j = 0; j < secret.length(); j++)
        {
            if (guess[j] == secret[j])
            {
                secret[j] = '-';
                c1++;
            }
            else
                seen[guess[j]]++;
        }

        for (int j = 0; j < secret.length(); j++)
        {
            if (seen[secret[j]] != 0)
            {
                seen[secret[j]]--;
                c2++;
            }
        }

        return to_string(c1) + "A" + to_string(c2) + "B";
    }
};