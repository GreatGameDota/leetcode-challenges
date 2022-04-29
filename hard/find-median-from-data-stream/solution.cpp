class MedianFinder
{
    class Node
    {
    public:
        Node *next;
        int d;
        Node(int d)
        {
            this->d = d;
            next = nullptr;
        }
    };

public:
    Node *root;
    int sz = 0;

    void addNum(int num)
    {
        sz++;
        if (!root)
            root = new Node(num);
        else
        {
            Node *temp = root;
            if (temp->d > num)
            {
                root = new Node(num);
                root->next = temp;
                return;
            }

            while (temp->next)
            {
                if (temp->next->d > num)
                {
                    Node *temp2 = temp->next;
                    temp->next = new Node(num);
                    temp->next->next = temp2;
                    return;
                }
                temp = temp->next;
            }
            temp->next = new Node(num);
        }
    }

    double findMedian()
    {
        Node *temp = root;
        int i = 0;
        while (temp)
        {
            if (sz % 2 == 1)
                if (i == sz / 2)
                    return temp->d;
            else
                if (i == sz / 2 - 1)
                    return (temp->d + temp->next->d) / 2.;
            temp = temp->next;
            i++;
        }
        return -1;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */