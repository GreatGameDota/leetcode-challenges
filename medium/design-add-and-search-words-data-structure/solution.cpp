class WordDictionary
{
    class Node
    {
    public:
        Node *nodes[26] = {nullptr};
        bool isEnd = false;
    };

public:
    Node *root;

    WordDictionary()
    {
        root = new Node();
    }

    void addWord(string word)
    {
        Node *temp = root;
        for (char &c : word)
        {
            if (!temp->nodes[c - 'a'])
                temp->nodes[c - 'a'] = new Node();
            temp = temp->nodes[c - 'a'];
        }
        temp->isEnd = true;
    }

    bool search(string word)
    {
        Node *temp = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == '.')
            {
                return searchRec(word.substr(i), temp);
            }
            else
            {
                if (!temp->nodes[word[i] - 'a'])
                    return false;
                temp = temp->nodes[word[i] - 'a'];
            }
        }
        return temp->isEnd;
    }

    bool searchRec(string word, Node *n)
    {
        if (word.length() == 0 && n->isEnd)
            return true;
        if (word[0] == '.')
        {
            for (int i = 0; i < 26; i++)
            {
                if (n->nodes[i])
                {
                    if (searchRec(word.substr(1), n->nodes[i]))
                        return true;
                }
            }
            return false;
        }
        else
        {
            Node *temp = n;
            for (int i = 0; i < word.length(); i++)
            {
                if (word[i] == '.')
                {
                    return searchRec(word.substr(i), temp);
                }
                else
                {
                    if (!temp->nodes[word[i] - 'a'])
                        return false;
                    temp = temp->nodes[word[i] - 'a'];
                }
            }
            return temp->isEnd;
        }
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */