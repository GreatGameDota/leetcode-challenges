/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        vector<string> vals;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode *n = q.front();
            q.pop();
            
            if (n)
                vals.push_back(to_string(n->val));
            else
                vals.push_back("n");
            
            if (n) {
                q.push(n->left);
                q.push(n->right);
            }
        }
        
        string ret = "";
        for (string &s : vals)
            ret += s + ",";
        ret.pop_back();
        return ret;
    }
    
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string> vals;
        int i = 0;
        while (i < data.length()) {
            string s = "";
            while (i < data.length() && data[i] != ',') {
                s += data[i];
                i++;
            }
            i++;
            vals.push_back(s);
        }
        
        if (vals[0][0] == 'n')
            return nullptr;
        
        TreeNode *root = new TreeNode(stoi(vals[0]));
        int idx = 1;
        queue<TreeNode *> q;
        q.push(root);
        while (idx < vals.size()) {
            TreeNode *n = q.front();
            q.pop();
            
            if (n) {
                if (vals[idx][0] != 'n')
                    n->left = new TreeNode(stoi(vals[idx]));
                else
                    n->left = nullptr;
                idx++;
                q.push(n->left);
                
                if (vals[idx][0] != 'n')
                    n->right = new TreeNode(stoi(vals[idx]));
                else
                    n->right = nullptr;
                idx++;
                q.push(n->right);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));