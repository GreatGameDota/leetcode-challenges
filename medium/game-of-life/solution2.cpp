class Solution
{
public:
    void gameOfLife(vector<vector<int>> &board)
    {
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[0].size(); j++)
                check(board, i, j);

        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == 2)
                    board[i][j] = 1;
                if (board[i][j] == -1)
                    board[i][j] = 0;
            }
    }

    void check(vector<vector<int>> &b, int r, int c)
    {
        int tot = 0;
        for (int i = r - 1; i <= r + 1; i++)
            for (int j = c - 1; j <= c + 1; j++)
                if (i >= 0 && j >= 0 && i < b.size() && j < b[0].size())
                    if (!(i == r && j == c))
                        if (b[i][j] == 1 || b[i][j] == -1)
                            tot++;

        if ((b[r][c] == 1 || b[r][c] == -1) && (tot == 2 || tot == 3))
            return;
        else if (b[r][c] == 0 && tot == 3)
            b[r][c] = 2;
        else if (b[r][c] == 1)
            b[r][c] = -1;
    }
};