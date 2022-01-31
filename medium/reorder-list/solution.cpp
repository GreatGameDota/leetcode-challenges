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
    void reorderList(ListNode *head)
    {
        if (!head->next)
            return;

        stack<int> seen;
        queue<int> seen2;

        ListNode *slow = head;
        ListNode *fast = head;
        do
        {
            slow = slow->next;
            fast = fast->next;
            if (!fast)
                break;

            fast = fast->next;
            if (!fast)
                break;

            seen2.push(slow->val);
        } while (fast);

        while (slow)
        {
            seen.push(slow->val);
            slow = slow->next;
        }

        slow = head;
        fast = head;
        do
        {
            slow = slow->next;
            fast = fast->next;
            if (!fast)
                break;
            if (!fast->next)
            {
                fast->val = slow->val;
                break;
            }
            fast = fast->next;

            fast->val = seen2.front();
            seen2.pop();
        } while (fast);

        slow = head;
        fast = head->next;
        do
        {
            fast->val = seen.top();
            seen.pop();

            slow = slow->next;
            fast = fast->next;
            if (!fast)
                break;
            fast = fast->next;
            if (!fast)
                break;
        } while (fast);
    }
};