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
    bool isPalindrome(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode *prev = slow;
        ListNode *curr = head;
        ListNode *next;
        while (curr != slow)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;

        if (fast)
            slow = slow->next;

        while (slow)
        {
            if (slow->val != head->val)
                return false;
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
};