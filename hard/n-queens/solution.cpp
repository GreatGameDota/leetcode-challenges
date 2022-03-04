class Solution
{
public:
    vector<vector<string>> ret;

    vector<vector<string>> solveNQueens(int n)
    {
        vector<string> arr;
        string s = "";
        for (int i = 0; i < n; i++)
            s += ".";
        for (int i = 0; i < n; i++)
            arr.push_back(s);

        backtrack(arr, n, 0, 0, 0);
        return ret;
    }

    void backtrack(vector<string> &perm, int n, int c, int r, int count)
    {
        if (count == n)
        {
            ret.push_back(perm);
            return;
        }
        if (c == n)
            return;
        if (r == n)
        {
            backtrack(perm, n, c + 1, 0, count);
            return;
        }

        if (isValid(perm, c, r))
        {
            perm[c][r] = 'Q';
            backtrack(perm, n, c, r + 1, count + 1);
        }
        perm[c][r] = '.';
        backtrack(perm, n, c, r + 1, count);
    }

    bool isValid(vector<string> &perm, int c, int r)
    {
        int n = perm.size();
        for (int i = 0; i < n; i++)
        {
            if (perm[i][r] == 'Q')
                return false;
            if (perm[c][i] == 'Q')
                return false;
        }

        int i = c + 1, j = r + 1;
        while (i < n && j < n)
        {
            if (perm[i][j] == 'Q')
                return false;
            i++, j++;
        }

        i = c - 1, j = r - 1;
        while (i > -1 && j > -1)
        {
            if (perm[i][j] == 'Q')
                return false;
            i--, j--;
        }

        i = c + 1, j = r - 1;
        while (i < n && j > -1)
        {
            if (perm[i][j] == 'Q')
                return false;
            i++, j--;
        }

        i = c - 1, j = r + 1;
        while (i > -1 && j < n)
        {
            if (perm[i][j] == 'Q')
                return false;
            i--, j++;
        }
        return true;
    }
};