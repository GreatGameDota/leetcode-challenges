class TrieNode
{
public:
    TrieNode *w[27] = {};
    int end = -1;

    bool contains(char c)
    {
        return w[c - 'a'] != nullptr;
    }

    void set(char c)
    {
        if (c == '#')
            w[26] = new TrieNode();
        else
            w[c - 'a'] = new TrieNode();
    }

    void setEnd(int idx)
    {
        end = idx;
    }

    TrieNode *get(char c)
    {
        if (c == '#')
            return w[26];
        else
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
            if (!temp->get(c))
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
            if (!temp->get(c))
                return nullptr;
            temp = temp->get(c);
        }
        return temp;
    }
};

class WordFilter
{
public:
    Trie tree;
    int idx;
    WordFilter(vector<string> &words)
    {
        tree = Trie();
        for (int j = 0; j < words.size(); j++)
        {
            string &s = words[j];
            tree.insert("#" + s, j);
            for (int i = s.length() - 1; i >= 0; i--)
                tree.insert(s.substr(i, s.length() - i) + "#" + s, j);
        }
    }

    int f(string prefix, string suffix)
    {
        TrieNode *end = tree.find(suffix + "#" + prefix);
        if (!end)
            return -1;

        idx = -1;
        dfs(end);
        return idx;
    }

    void dfs(TrieNode *n)
    {
        if (!n)
            return;

        if (n->end != -1)
            idx = max(idx, n->end);

        for (int i = 0; i < 26; i++)
            dfs(n->w[i]);
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */