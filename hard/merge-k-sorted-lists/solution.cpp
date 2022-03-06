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

        priority_queue<int, vector<int>, greater<>> heap;
        for (ListNode *n : lists)
        {
            ListNode *temp = n;
            while (temp)
            {
                heap.push(temp->val);
                temp = temp->next;
            }
        }

        ListNode *ret = nullptr;
        ListNode *head = nullptr;
        while (!heap.empty())
        {
            int n = heap.top();
            heap.pop();
            if (ret)
            {
                ret->next = new ListNode(n);
                ret = ret->next;
            }
            else
            {
                ret = new ListNode(n);
                head = ret;
            }
        }

        return head;
    }
};