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
        stack<ListNode *> s;
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        while (slow)
        {
            s.push(slow);
            slow = slow->next;
        }

        ListNode *temp = head;
        while (!s.empty())
        {
            ListNode *nxt = temp->next;
            temp->next = s.top();
            s.pop();

            temp->next->next = s.empty() ? nullptr : nxt;
            temp = nxt;
        }
    }
};