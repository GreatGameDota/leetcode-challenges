class Solution
{
public:
    bool exist(vector<vector<char>> &board, string word)
    {
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == word[0])
                    if (search(board, i, j, word, 0))
                        return true;
            }
        }
        return false;
    }

    bool search(vector<vector<char>> &board, int row, int col, string word, int n)
    {
        if (row < 0 || row >= board.size())
            return false;
        if (col < 0 || col >= board[0].size())
            return false;

        if (board[row][col] == word[n])
        {
            if (n == word.size() - 1)
                return true;

            char c = board[row][col];
            board[row][col] = '*';

            if (search(board, row - 1, col, word, n + 1) ||
                search(board, row + 1, col, word, n + 1) ||
                search(board, row, col + 1, word, n + 1) ||
                search(board, row, col - 1, word, n + 1))
                return true;
            else
            {
                board[row][col] = c;
                return false;
            }
        }
        else
            return false;
    }
};