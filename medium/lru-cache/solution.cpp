class LRUCache
{
public:
    class Node
    {
    public:
        int val;
        Node *next;
        Node *prev;
        Node(int v, Node *p) : val{v}, prev{p}
        {
            next = nullptr;
        }
    };

    Node *head = nullptr;
    Node *tail = nullptr;
    int k;
    int sz;
    unordered_map<int, int> m;
    unordered_map<int, Node *> m2;

    LRUCache(int capacity)
    {
        k = capacity;
        sz = 0;
    }

    int get(int key)
    {
        if (!m.count(key))
            return -1;

        moveKey(m2[key]);
        m2[key] = head;

        return m[key];
    }

    void put(int key, int value)
    {
        m[key] = value;

        if (m2[key])
        {
            moveKey(m2[key]);
        }
        else
        {
            if (++sz > k)
            {
                // Remove LRU key at end
                m.erase(tail->val);
                m2.erase(tail->val);
                if (tail->prev)
                {
                    tail = tail->prev;
                    tail->next = nullptr;
                }
            }

            // Append new key to front
            if (!head)
            {
                head = new Node(key, nullptr);
                tail = head;
            }
            else
            {
                head->prev = new Node(key, nullptr);
                head->prev->next = head;
                head = head->prev;
            }
        }
        m2[key] = head;
    }

    void moveKey(Node *n)
    {
        if (n->prev)
        {
            if (n == tail)
                tail = tail->prev;

            if (n->next)
                n->next->prev = n->prev;
            n->prev->next = n->next;

            head->prev = n;
            n->next = head;
            n->prev = nullptr;
            head = n;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */