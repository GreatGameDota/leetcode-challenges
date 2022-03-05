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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (k == 1)
            return head;

        int size = 0;
        ListNode *temp = head;
        while (temp)
        {
            temp = temp->next;
            size++;
        }
        temp = nullptr;

        ListNode *curr = nullptr;
        ListNode *ret = nullptr;
        ListNode *prev = nullptr;
        ListNode *final_node = nullptr;
        while (size >= k)
        {
            int i = k;
            ListNode *last = head;
            do
            {
                temp = head->next;
                head->next = curr;
                curr = head;
                head = temp;
                if (--i == 0)
                {
                    if (!prev)
                        prev = last;
                    else
                    {
                        prev->next = curr;
                        prev = last;
                    }

                    if (!ret)
                        ret = curr;
                    final_node = last;
                    break;
                }
            } while (head);
            size -= k;
        }

        final_node->next = head;
        if (ret)
            return ret;
        else
            return curr;
    }
};