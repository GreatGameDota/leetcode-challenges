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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head)
            return head;
        if (k == 0)
            return head;

        int size = 0;
        ListNode *temp = head;
        while (temp)
        {
            temp = temp->next;
            size++;
        }
        k %= size;

        if (size == 1 || k == 0)
            return head;

        temp = head;
        for (int i = 0; i < size - k - 1; i++)
        {
            temp = temp->next;
        }

        ListNode *temp2 = temp->next;
        temp->next = NULL;
        ListNode *ret = temp2;
        while (temp2->next)
        {
            temp2 = temp2->next;
        }
        temp2->next = head;

        return ret;
    }
};