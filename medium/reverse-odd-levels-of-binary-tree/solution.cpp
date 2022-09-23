/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *reverseOddLevels(TreeNode *root)
    {
        deque<pair<TreeNode *, int>> q;
        q.push_back({root, -1});
        while (!q.empty())
        {
            pair<TreeNode *, int> p = q.front();
            q.pop_front();

            if (p.first->left)
                q.push_back({p.first->left, p.second + 1});
            if (p.first->right)
                q.push_back({p.first->right, p.second + 1});

            if (!q.empty() && q.front().second != p.second && p.second & 1)
            {
                auto it = begin(q);
                auto it2 = prev(end(q));
                while (it < it2)
                {
                    int tmp = it->first->val;
                    it->first->val = it2->first->val;
                    it2->first->val = tmp;
                    it++, it2--;
                }
            }
        }
        return root;
    }
};