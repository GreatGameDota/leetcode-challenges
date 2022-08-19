class Solution {
    class TrieNode {
        public:
            TrieNode *arr[26];
            bool isEnd = false;
    };
    
    class Trie {
        public:
            TrieNode *root = new TrieNode();
            
            void insert(string &s) {
                TrieNode *tmp = root;
                for (int i = 0; i < s.length(); i++) {
                    if (!tmp->arr[s[i] - 'a'])
                        tmp->arr[s[i] - 'a'] = new TrieNode();
                    tmp = tmp->arr[s[i] - 'a'];
                }
                tmp->isEnd = true;
            }
    };
public:
    vector<string> ret;
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie t = Trie();
        for (string &s : words)
            t.insert(s);
        
        string word = "";
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[0].size(); j++)
                if (t.root->arr[board[i][j] - 'a'])
                    search(board, i, j, word, t.root);
        return ret;
    }
    
    void search(vector<vector<char>>& board, int row, int col, string &word, TrieNode *n) {
        if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size() || board[row][col] == '*')
            return;
        
        if (n->arr[board[row][col] - 'a']) {
            char c = board[row][col];
            word += c;
            if (n->arr[c - 'a']->isEnd) {
                n->arr[c - 'a']->isEnd = false;
                ret.push_back(word);
            }
            
            board[row][col] = '*';
            
            n = n->arr[c - 'a'];
            search(board, row-1, col, word, n);
            search(board, row+1, col, word, n);
            search(board, row, col+1, word, n);
            search(board, row, col-1, word, n);
            
            board[row][col] = c;
            word.pop_back();
        }
    }
};