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
    ListNode *insertionSortList(ListNode *head)
    {
        ListNode *temp = head->next;
        ListNode *max = head;
        ListNode *ret = head;
        while (temp)
        {
            ListNode *next = temp->next;
            if (temp->val >= max->val)
            {
                max = temp;
            }
            else
            {
                ListNode *temp2 = ret;
                max->next = temp->next;
                while (temp2)
                {
                    if (temp2 == ret && temp2->val > temp->val)
                    {
                        temp->next = temp2;
                        ret = temp;
                        break;
                    }
                    else
                    {
                        if (temp2->next && temp2->next->val > temp->val)
                        {
                            temp->next = temp2->next;
                            temp2->next = temp;
                            break;
                        }
                    }
                    temp2 = temp2->next;
                }
            }
            temp = next;
        }
        return ret;
    }
};