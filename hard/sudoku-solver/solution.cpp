class Solution
{
public:
    void solveSudoku(vector<vector<char>> &board)
    {
        backtrack(board, 0, 0);
    }

    bool backtrack(vector<vector<char>> &board, int c, int r)
    {
        if (c == 9)
            return true;
        if (r == 9)
            return backtrack(board, c + 1, 0);

        if (board[c][r] == '.')
        {
            for (int i = 1; i <= 9; i++)
            {
                if (isValidSudoku(board, c, r, i + '0'))
                {
                    board[c][r] = i + '0';
                    if (backtrack(board, c, r + 1))
                        return true;
                }
            }
            board[c][r] = '.';
            return false;
        }
        return backtrack(board, c, r + 1);
    }

    bool isValidSudoku(vector<vector<char>> &board, int i, int j, char val)
    {
        int square = i / 3 * 3 + j / 3;
        int row = (square / 3) * 3;
        int col = (square % 3) * 3;

        for (int a = 0; a < 9; a++)
        {
            if (board[a][j] == val)
                return false;
            if (board[i][a] == val)
                return false;
            if (board[a / 3 + row][a % 3 + col] == val)
                return false;
        }

        return true;
    }
};