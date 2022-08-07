class Solution
{
public:
    int vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    long long MOD = 10e8 + 7;
    int countVowelPermutation(int n)
    {
        string perm = "";
        vector<vector<long long>> memo(vector<vector<long long>>(6, vector<long long>(n, -1)));
        return backtrack(perm, n, memo);
    }

    long long backtrack(string &perm, int n, vector<vector<long long>> &memo)
    {
        if (perm.size() == n)
            return 1;

        int idx = 0;
        if (perm.size() > 0)
        {
            switch (perm.back())
            {
            case 'a':
                idx = 1;
                break;
            case 'e':
                idx = 2;
                break;
            case 'i':
                idx = 3;
                break;
            case 'o':
                idx = 4;
                break;
            case 'u':
                idx = 5;
                break;
            }
        }

        if (memo[idx][perm.size()] == -1)
        {
            long long tot = 0;
            if (perm.size() == 0)
            {
                for (int i = 0; i < 5; i++)
                {
                    perm += vowels[i];
                    tot += backtrack(perm, n, memo);
                    perm.pop_back();
                }
            }
            else
            {
                if (perm.back() == 'a')
                {
                    perm += 'e';
                    tot += backtrack(perm, n, memo);
                    perm.pop_back();
                }
                else if (perm.back() == 'e')
                {
                    perm += 'a';
                    tot += backtrack(perm, n, memo);
                    perm.pop_back();
                    perm += 'i';
                    tot += backtrack(perm, n, memo);
                    perm.pop_back();
                }
                else if (perm.back() == 'i')
                {
                    for (int i = 0; i < 5; i++)
                    {
                        if (vowels[i] != 'i')
                        {
                            perm += vowels[i];
                            tot += backtrack(perm, n, memo);
                            perm.pop_back();
                        }
                    }
                }
                else if (perm.back() == 'o')
                {
                    perm += 'i';
                    tot += backtrack(perm, n, memo);
                    perm.pop_back();
                    perm += 'u';
                    tot += backtrack(perm, n, memo);
                    perm.pop_back();
                }
                else if (perm.back() == 'u')
                {
                    perm += 'a';
                    tot += backtrack(perm, n, memo);
                    perm.pop_back();
                }
            }
            memo[idx][perm.size()] = tot % MOD;
        }
        return memo[idx][perm.size()];
    }
};