/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.size() == 0)
            return nullptr;

        bool check = false;
        for (ListNode *n : lists)
            if (n)
                check = true;

        ListNode *ret = nullptr;
        ListNode *head = nullptr;
        while (check)
        {
            int min = INT_MAX;
            ListNode *node;
            int idx = -1;
            int i = 0;
            for (ListNode *n : lists)
            {
                if (n && n->val < min)
                {
                    min = n->val;
                    node = n;
                    idx = i;
                }
                i++;
            }
            if (idx == -1)
                break;

            if (ret)
            {
                ret->next = node;
                ret = ret->next;
            }
            else
            {
                ret = node;
                head = ret;
            }
            lists[idx] = node->next;
        }

        return head;
    }
};