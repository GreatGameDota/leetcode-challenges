class Solution
{
public:
    bool isInterleave(string s1, string s2, string s3)
    {
        int memo[101][101][200];
        for (int i = 0; i < s1.length() + 1; i++)
            for (int j = 0; j < s2.length() + 1; j++)
                for (int k = 0; k < s3.length(); k++)
                    memo[i][j][k] = -1;
        return backtrack(0, 0, 0, s1, s2, s3, memo);
    }

    bool backtrack(int idx1, int idx2, int idx3, string &s1, string &s2, string &s3, int memo[101][101][200])
    {
        if (idx3 >= s3.length() && idx1 >= s1.length() && idx2 >= s2.length())
            return true;

        if ((idx1 >= s1.length() || s1[idx1] != s3[idx3]) && (idx2 >= s2.length() || s2[idx2] != s3[idx3]))
            return false;

        if (memo[idx1][idx2][idx3] == -1)
        {
            memo[idx1][idx2][idx3] = false;
            if (s1[idx1] == s3[idx3])
                if (backtrack(idx1 + 1, idx2, idx3 + 1, s1, s2, s3, memo))
                    memo[idx1][idx2][idx3] = true;
            if (s2[idx2] == s3[idx3])
                if (backtrack(idx1, idx2 + 1, idx3 + 1, s1, s2, s3, memo))
                    memo[idx1][idx2][idx3] = true;
        }
        return memo[idx1][idx2][idx3];
    }
};