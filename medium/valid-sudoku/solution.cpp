class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < board[0].size(); i++)
            if (!checkCol(i, board))
                return false;
        for (int i = 0; i < board[0].size(); i++)
            if (!checkRow(i, board))
                return false;
        for (int i = 0; i < 9; i++)
            if (!checkSquare(i, board))
                return false;
        return true;
    }

    bool checkCol(int col, vector<vector<char>> &board)
    {
        map<int, int> seen;
        for (int i = 0; i < board.size(); i++)
        {
            if (board[i][col] != '.')
            {
                int num = board[i][col] - 48;
                if (!seen[num])
                    seen[num] = 1;
                else
                    return false;
            }
        }
        return true;
    }

    bool checkRow(int row, vector<vector<char>> &board)
    {
        map<int, int> seen;
        for (int i = 0; i < board[0].size(); i++)
        {
            if (board[row][i] != '.')
            {
                int num = board[row][i] - 48;
                if (!seen[num])
                    seen[num] = 1;
                else
                    return false;
            }
        }
        return true;
    }

    bool checkSquare(int square, vector<vector<char>> &board)
    {
        int row = (square / 3) * 3;
        int col = (square % 3) * 3;
        map<int, int> seen;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i + row][j + col] != '.')
                {
                    int num = board[i + row][j + col] - 48;
                    if (!seen[num])
                        seen[num] = 1;
                    else
                        return false;
                }
            }
        }

        return true;
    }
};