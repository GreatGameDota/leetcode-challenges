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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (right - left == 0)
            return head;

        ListNode *leftNode = head;
        for (int i = 0; i < left - 2; i++)
            leftNode = leftNode->next;

        ListNode *head2 = NULL;
        ListNode *first = leftNode;
        ListNode *curr = leftNode;
        if (left != 1)
            curr = curr->next;

        ListNode *last = curr;
        for (int i = 0; i <= right - left; i++)
        {
            ListNode *temp = curr->next;
            curr->next = head2;
            head2 = curr;
            curr = temp;
        }

        if (left != 1)
        {
            first->next = head2;
            if (first != head)
                first = head;
        }
        else
            first = head2;

        last->next = curr;
        return first;
    }
};