class Solution
{
    class TrieNode
    {
    public:
        TrieNode *nodes[26] = {nullptr};
        bool isEnd = false;

        bool contains(char c)
        {
            return nodes[c - 'a'] != nullptr;
        }

        TrieNode *get(char c)
        {
            return nodes[c - 'a'];
        }

        void put(char c)
        {
            nodes[c - 'a'] = new TrieNode();
        }

        void setEnd()
        {
            isEnd = true;
        }

        bool isNodeEnd()
        {
            return isEnd;
        }
    };

    class TrieTree
    {
    public:
        TrieNode *root;

        TrieTree() : root{new TrieNode()} {};

        void insert(string word)
        {
            TrieNode *temp = root;
            char c;
            for (int i = 0; i < word.size(); i++)
            {
                c = word[i];
                if (!temp->contains(c))
                    temp->put(c);
                temp = temp->get(c);
            }
            temp->setEnd();
        }

        bool searchConstruct(string word)
        {
            TrieNode *temp = root;
            for (int i = 0; i < word.size(); i++)
            {
                char c = word[i];
                if (!temp->contains(c))
                    return false;
                temp = temp->get(c);
                if (!temp->isNodeEnd())
                    return false;
            }
            return temp->isNodeEnd();
        }
    };

public:
    string longestWord(vector<string> &words)
    {
        TrieTree t = TrieTree();

        for (string &s : words)
            t.insert(s);

        string ret = "";
        int max = 0;
        for (string &s : words)
        {
            if (t.searchConstruct(s) && s.size() >= max)
            {
                if (s.size() == max)
                {
                    if (s < ret)
                        ret = s;
                }
                else
                    ret = s;
                max = s.size();
            }
        }

        return ret;
    }
};