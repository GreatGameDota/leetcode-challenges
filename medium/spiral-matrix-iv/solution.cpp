/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode *head)
    {
        vector<vector<int>> res(m, vector<int>(n, -1));

        int i = 0, j = 0;
        int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int direction = 0;
        for (ListNode *temp = head; temp; temp = temp->next)
        {
            if (res[i][j] != -1)
            {
                i -= dir[direction][0];
                j -= dir[direction][1];
                direction = (direction + 1) % 4;
                i += dir[direction][0];
                j += dir[direction][1];
            }
            res[i][j] = temp->val;
            i += dir[direction][0];
            j += dir[direction][1];
            if (i < 0 || j < 0 || i == m || j == n)
            {
                direction = (direction + 1) % 4;
                i = min(m - 1, max(0, i)) + dir[direction][0];
                j = min(n - 1, max(0, j)) + dir[direction][1];
            }
        }

        return res;
    }
};