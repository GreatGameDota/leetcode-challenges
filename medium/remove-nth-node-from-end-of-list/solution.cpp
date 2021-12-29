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
        ListNode *temp = head;
        int size = 0;
        while (temp)
        {
            size++;
            temp = temp->next;
        }
        temp = head;

        n = size - n;
        int count = 0;

        if (n - 1 == -1)
        {
            if (head->next)
            {
                head = head->next;
                return head;
            }
            else
            {
                return NULL;
            }
        }

        while (count != n - 1)
        {
            temp = temp->next;
            count++;
        }

        if (temp)
            if (temp->next)
                temp->next = temp->next->next;
            else
                return NULL;
        else
            return NULL;
        return head;
    }
};