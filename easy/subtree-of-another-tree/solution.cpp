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
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()) {
            int len = q.size();
            for (int i = 0; i < len; i++) {
                TreeNode *n = q.front();
                q.pop();
                
                if (n->val == subRoot->val) {
                    if (same(n, subRoot))
                        return true;
                }
                
                if (n->left) q.push(n->left);
                if (n->right) q.push(n->right);
            }
        }
        return false;
    }
    
    bool same(TreeNode *root1, TreeNode *root2) {
        if (!root1 || !root2)
            return root1==root2;
        return (root1->val == root2->val && same(root1->left, root2->left) && same(root1->right, root2->right));
    }
};