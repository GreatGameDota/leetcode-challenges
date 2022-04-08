class KthLargest {
    class Node {
        public:
            Node *left;
            Node *right;
            int val;
            int sizel = 0;
            int sizer = 0;
            Node(int v) {
                val = v;
                left = nullptr;
                right = nullptr;
            }
            void ins(int v) {
                if (v > val) {
                    sizer++;
                    if (!right)
                        right = new Node(v);
                    else
                        right->ins(v);
                } else {
                    sizel++;
                    if (!left)
                        left = new Node(v);
                    else
                        left->ins(v);
                }
            }
            int search(int k) {
                if (sizer == k - 1)
                    return val;
                if (sizer < k)
                    return left->search(k - sizer - 1);
                else
                    return right->search(k);
            }
    };
public:
    Node *root = nullptr;
    int kth;
    KthLargest(int k, vector<int>& nums) {
        kth = k;
        for (int &i : nums)
            if (!root)
                root = new Node(i);
            else
                root->ins(i);
    }
    
    int add(int val) {
        if (!root)
            root = new Node(val);
        else
            root->ins(val);
        
        return root->search(kth);
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */