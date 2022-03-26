class Solution
{
public:
    void solve(vector<vector<char>> &board)
    {
        for (int i = 1; i < board.size() - 1; i++)
        {
            for (int j = 1; j < board[0].size() - 1; j++)
            {
                bool region = true;
                backtrack(board, i, j, region);
                if (region)
                    fill(board, i, j, 'X');
                else
                    fill(board, i, j, 'O');
            }
        }
    }

    void backtrack(vector<vector<char>> &board, int r, int c, bool &region)
    {
        if (r == 0 || c == 0 || r == board.size() - 1 || c == board[0].size() - 1 || !region)
        {
            if (board[r][c] == 'O')
                region = false;
            return;
        }

        if (board[r][c] == 'X' || board[r][c] == '*')
            return;

        board[r][c] = '*';
        backtrack(board, r - 1, c, region);
        backtrack(board, r + 1, c, region);
        backtrack(board, r, c - 1, region);
        backtrack(board, r, c + 1, region);
    }

    void fill(vector<vector<char>> &board, int r, int c, char ch)
    {
        if (r == 0 || c == 0 || r == board.size() - 1 || c == board[0].size() - 1)
            return;

        if (board[r][c] != '*')
            return;

        board[r][c] = ch;
        fill(board, r - 1, c, ch);
        fill(board, r + 1, c, ch);
        fill(board, r, c - 1, ch);
        fill(board, r, c + 1, ch);
    }
};