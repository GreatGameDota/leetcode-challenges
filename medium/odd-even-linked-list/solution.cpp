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
    ListNode *oddEvenList(ListNode *head)
    {
        if (!head)
            return NULL;
        if (!head->next)
            return head;
        ListNode *temp = head->next;
        ListNode *ret = head;
        ListNode *evens = temp;

        while (true)
        {
            if (head->next && head->next->next)
            {
                head->next = head->next->next;
                head = head->next;
            }

            if (temp->next && temp->next->next)
            {
                temp->next = temp->next->next;
                temp = temp->next;
            }

            if (!(head->next && head->next->next))
                if (!(temp->next && temp->next->next))
                    break;
        }
        temp->next = NULL;
        head->next = evens;
        return ret;
    }
};