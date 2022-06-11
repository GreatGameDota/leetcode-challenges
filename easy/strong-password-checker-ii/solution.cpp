class Solution
{
public:
    bool strongPasswordCheckerII(string password)
    {
        unordered_map<char, int> m = {{'!', 1}, {'@', 1}, {'#', 1}, {'$', 1}, {'%', 1}, {'^', 1}, {'&', 1}, {'*', 1}, {'(', 1}, {')', 1}, {'-', 1}, {'+', 1}};
        bool spec = false;
        for (int i = 0; i < password.length() - 1; i++)
        {
            if (password[i] == password[i + 1])
                return false;
            if (m[password[i]])
                spec = true;
        }
        if (m[password[password.size() - 1]])
            spec = true;
        regex reg("^(?=.*[0-9])(?=.*[a-z])(?=.*[A-Z]).{8,}$");
        return spec && regex_match(password, reg);
    }
};