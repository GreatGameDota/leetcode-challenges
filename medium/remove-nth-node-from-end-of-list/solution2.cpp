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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int i = 0;
        ListNode *p1 = head, *p2 = nullptr;
        while (p1)
        {
            if (i >= n)
                p2 = p2 ? p2->next : head;
            i++;
            p1 = p1->next;
        }
        if (p2 == nullptr)
            return head->next;
        p2->next = p2->next->next;
        return head;
    }
};