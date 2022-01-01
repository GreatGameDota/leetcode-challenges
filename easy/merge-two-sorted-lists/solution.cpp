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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head = nullptr;
        ListNode *tail;
        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                if (!head)
                {
                    tail = new ListNode(list1->val);
                    head = tail;
                }
                else
                {
                    tail->next = new ListNode(list1->val);
                    tail = tail->next;
                }
                list1 = list1->next;
            }

            else if (list1->val > list2->val)
            {
                if (!head)
                {
                    tail = new ListNode(list2->val);
                    head = tail;
                }
                else
                {
                    tail->next = new ListNode(list2->val);
                    tail = tail->next;
                }
                list2 = list2->next;
            }

            else if (list1->val == list2->val)
            {
                if (!head)
                {
                    tail = new ListNode(list1->val);
                    head = tail;
                }
                else
                {
                    tail->next = new ListNode(list1->val);
                    tail = tail->next;
                }
                list1 = list1->next;

                if (!head)
                {
                    tail = new ListNode(list2->val);
                    head = tail;
                }
                else
                {
                    tail->next = new ListNode(list2->val);
                    tail = tail->next;
                }
                list2 = list2->next;
            }
        }

        if (list1)
        {
            while (list1)
            {
                if (!head)
                {
                    tail = new ListNode(list1->val);
                    head = tail;
                }
                else
                {
                    tail->next = new ListNode(list1->val);
                    tail = tail->next;
                }
                list1 = list1->next;
            }
        }
        if (list2)
        {
            while (list2)
            {
                if (!head)
                {
                    tail = new ListNode(list2->val);
                    head = tail;
                }
                else
                {
                    tail->next = new ListNode(list2->val);
                    tail = tail->next;
                }
                list2 = list2->next;
            }
        }

        return head;
    }
};