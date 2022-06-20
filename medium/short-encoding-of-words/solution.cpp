class TrieNode
{
public:
    TrieNode *w[26] = {};
    int end = -1;

    bool contains(char c)
    {
        return w[c - 'a'] != nullptr;
    }

    void set(char c)
    {
        w[c - 'a'] = new TrieNode();
    }

    void setEnd(int idx)
    {
        end = idx;
    }

    TrieNode *get(char c)
    {
        return w[c - 'a'];
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode();
    }

    void insert(string s, int idx)
    {
        TrieNode *temp = root;
        for (char &c : s)
        {
            if (!temp->contains(c))
                temp->set(c);
            temp = temp->get(c);
        }
        temp->setEnd(idx);
    }

    TrieNode *find(string s)
    {
        TrieNode *temp = root;
        for (char &c : s)
        {
            if (!temp->contains(c))
                return nullptr;
            temp = temp->get(c);
        }
        return temp;
    }
};

class Solution
{
public:
    Trie tree = Trie();
    int sz = 0;
    int minimumLengthEncoding(vector<string> &words)
    {
        for (int i = 0; i < words.size(); i++)
        {
            reverse(words[i].begin(), words[i].end());
            tree.insert(words[i], i);
        }
        dfs(tree.root, words);
        return sz;
    }

    void dfs(TrieNode *n, vector<string> &words)
    {
        if (!n)
            return;

        bool leaf = true;
        for (int i = 0; i < 26; i++)
        {
            if (n->w[i])
            {
                leaf = false;
                dfs(n->w[i], words);
            }
        }

        if (leaf)
            sz += words[n->end].length() + 1;
    }
};