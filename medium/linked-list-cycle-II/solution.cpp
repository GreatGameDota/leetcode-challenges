/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *walker = head;
        ListNode *runner = head;

        while (runner)
        {
            walker = walker->next;
            if (!walker)
                return NULL;
            runner = runner->next;
            if (!runner)
                return NULL;
            runner = runner->next;
            if (!runner)
                return NULL;
            if (walker == runner)
                break;
        }

        runner = head;
        while (runner != walker)
        {
            walker = walker->next;
            runner = runner->next;
        }

        return runner;
    }
};