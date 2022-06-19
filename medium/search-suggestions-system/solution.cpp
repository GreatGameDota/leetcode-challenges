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
    vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord)
    {
        for (int i = 0; i < products.size(); i++)
            tree.insert(products[i], i);

        string curr = "";
        vector<vector<string>> ret;
        for (char &c : searchWord)
        {
            curr += c;
            priority_queue<string> heap;
            TrieNode *end = tree.find(curr);
            if (!end)
                ret.push_back({});
            else
            {
                vector<string> res;
                dfs(end, products, res);
                ret.push_back(res);
            }
        }
        return ret;
    }

    void dfs(TrieNode *n, vector<string> &products, vector<string> &res)
    {
        if (!n || res.size() == 3)
            return;

        if (n->end != -1)
            res.push_back(products[n->end]);

        for (int i = 0; i < 26; i++)
            dfs(n->w[i], products, res);
    }
};