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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *ret = nullptr;
        ListNode *res = nullptr;

        while (temp)
        {
            while (temp->next && temp->next->val == temp->val)
            {
                int dup = temp->val;
                while (temp && temp->val == dup)
                {
                    ListNode *temp2 = temp->next;
                    delete temp;
                    temp = temp2;
                }
                if (!temp)
                    break;
            }
            if (!temp)
                break;

            if (!ret)
            {
                ret = temp;
                res = ret;
            }
            else
            {
                ret->next = temp;
                ret = ret->next;
            }
            temp = temp->next;
        }
        if (ret)
            ret->next = nullptr;
        return res;
    }
};