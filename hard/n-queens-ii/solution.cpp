class Solution
{
public:
    int totalNQueens(int n)
    {
        vector<int> rows(n, 0);
        vector<int> cols(n, 0);
        vector<vector<int>> diags(n, vector<int>(n, 0));
        return backtrack(0, 0, 0, n, rows, cols, diags);
    }

    int backtrack(int x, int y, int curr, int &n, vector<int> &rows, vector<int> &cols, vector<vector<int>> &diags)
    {
        if (y == n)
            return curr == n ? 1 : 0;

        int ret = 0;
        if (!rows[y] && !cols[x] && !diags[y][x])
        {
            rows[y] = 1;
            cols[x] = 1;
            diags[y][x] = 2;
            int _x = x;
            int _y = y;
            while (++_x < n && ++_y < n)
                if (diags[_y][_x] == 0)
                    diags[_y][_x] = curr + 1;
            _x = x;
            _y = y;
            while (--_x >= 0 && --_y >= 0)
                if (diags[_y][_x] == 0)
                    diags[_y][_x] = curr + 1;
            _x = x;
            _y = y;
            while (--_x >= 0 && ++_y < n)
                if (diags[_y][_x] == 0)
                    diags[_y][_x] = curr + 1;
            _x = x;
            _y = y;
            while (++_x < n && --_y >= 0)
            {
                if (diags[_y][_x] == 0)
                    diags[_y][_x] = curr + 1;
            }

            ret += x == n - 1 ? backtrack(0, y + 1, curr + 1, n, rows, cols, diags) : backtrack(x + 1, y, curr + 1, n, rows, cols, diags);

            rows[y] = 0;
            cols[x] = 0;
            diags[y][x] = 0;
            _x = x;
            _y = y;
            while (++_x < n && ++_y < n)
                if (diags[_y][_x] == curr + 1)
                    diags[_y][_x] = 0;
            _x = x;
            _y = y;
            while (--_x >= 0 && --_y >= 0)
                if (diags[_y][_x] == curr + 1)
                    diags[_y][_x] = 0;
            _x = x;
            _y = y;
            while (--_x >= 0 && ++_y < n)
                if (diags[_y][_x] == curr + 1)
                    diags[_y][_x] = 0;
            _x = x;
            _y = y;
            while (++_x < n && --_y >= 0)
                if (diags[_y][_x] == curr + 1)
                    diags[_y][_x] = 0;
        }

        return ret + (x == n - 1 ? backtrack(0, y + 1, curr, n, rows, cols, diags) : backtrack(x + 1, y, curr, n, rows, cols, diags));
    }
};