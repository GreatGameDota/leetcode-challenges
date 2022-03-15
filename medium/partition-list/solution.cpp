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
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *temp = head;
        ListNode *head2 = nullptr;
        ListNode *ret2 = nullptr;
        ListNode *ret = nullptr;
        ListNode *curr = nullptr;
        if (!temp)
            return nullptr;

        if (temp->val >= x)
        {
            head2 = temp;
            ret2 = head2;
        }
        else
        {
            ret = temp;
            curr = ret;
        }

        while (temp)
        {
            if (temp->next && temp->next->val >= x)
            {
                if (head2)
                {
                    head2->next = temp->next;
                    head2 = head2->next;
                }
                else
                {
                    head2 = temp->next;
                    ret2 = head2;
                }
                temp = temp->next;
            }
            else
            {
                if (!ret)
                {
                    ret = temp->next;
                    curr = ret;
                }
                else
                {
                    if (temp->next)
                    {
                        curr->next = temp->next;
                        curr = curr->next;
                    }
                }
                temp = temp->next;
            }
        }
        if (head2)
            head2->next = nullptr;
        if (curr)
            curr->next = ret2;

        return ret ? ret : ret2;
    }
};