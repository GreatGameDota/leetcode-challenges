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
    int getDecimalValue(ListNode *head)
    {
        ListNode *temp = head;
        int num = 0;
        while (temp)
        {
            if (temp->val == 0 && num > 0)
                num *= 2;
            else if (temp->val == 1)
            {
                num *= 2;
                num++;
            }
            temp = temp->next;
        }
        return num;
    }
};