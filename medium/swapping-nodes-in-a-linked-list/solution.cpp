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
    ListNode *swapNodes(ListNode *head, int k)
    {
        if (!head->next)
            return head;
        ListNode *slow = head;
        ListNode *fast = head;
        int i = 1;
        ListNode *left = nullptr;
        // O(n/2)
        while (fast && fast->next)
        {
            if (i == k)
                left = slow;
            slow = slow->next;
            fast = fast->next->next;
            i++;
        }

        if (left)
        {
            if (!fast)
                i--;
            // O(n/2)
            for (int j = 0; j < (i - k); j++)
                slow = slow->next;

            int temp = left->val;
            left->val = slow->val;
            slow->val = temp;
        }
        else
        {
            if (fast && i == k)
                return head;

            if (!fast)
                k = (i - 1) * 2 - k + 1;
            else
                k = i * 2 - k;

            return swapNodes(head, k);
        }
        return head;
    }
};