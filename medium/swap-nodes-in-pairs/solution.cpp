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
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *next = temp;
        ListNode *ret = temp;
        while (temp)
        {
            next = next->next;
            if (!next)
                break;

            int temp2 = temp->val;
            temp->val = next->val;
            next->val = temp2;

            if (next->next)
            {
                temp = next->next;
                next = next->next;
            }
            else
            {
                break;
            }
        }
        return ret;
    }
};