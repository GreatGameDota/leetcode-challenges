class Solution
{
public:
    void gameOfLife(vector<vector<int>> &board)
    {
        vector<vector<int>> newB(board.size(), vector<int>(board[0].size(), 0));
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[0].size(); j++)
                check(board, newB, i, j);

        board = newB;
    }

    void check(vector<vector<int>> &b, vector<vector<int>> &n, int r, int c)
    {
        int tot = 0;
        for (int i = r - 1; i <= r + 1; i++)
            for (int j = c - 1; j <= c + 1; j++)
                if (i >= 0 && j >= 0 && i < b.size() && j < b[0].size())
                    if (!(i == r && j == c))
                        if (b[i][j] == 1)
                            tot++;

        if (b[r][c] == 1 && (tot == 2 || tot == 3))
            n[r][c] = 1;
        else if (b[r][c] == 0 && tot == 3)
            n[r][c] = 1;
    }
};