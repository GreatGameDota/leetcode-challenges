class Trie
{
    class TrieNode
    {
    public:
        TrieNode *nodes[26];
        bool isEnd = false;

        void add(char c)
        {
            nodes[c - 'a'] = new TrieNode();
        }

        TrieNode *get(char c)
        {
            return nodes[c - 'a'];
        }

        bool isNodeEnd()
        {
            return isEnd;
        }

        void setEnd()
        {
            isEnd = true;
        }
    };

public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode();
    }

    void insert(string word)
    {
        TrieNode *temp = root;
        for (char &c : word)
        {
            if (!temp->get(c))
                temp->add(c);
            temp = temp->get(c);
        }
        temp->setEnd();
    }

    bool search(string word)
    {
        TrieNode *temp = root;
        for (char &c : word)
        {
            if (!temp->get(c))
                return false;
            temp = temp->get(c);
        }
        return temp->isNodeEnd();
    }

    bool startsWith(string prefix)
    {
        TrieNode *temp = root;
        for (char &c : prefix)
        {
            if (!temp->get(c))
                return false;
            temp = temp->get(c);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */