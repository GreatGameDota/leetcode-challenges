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
#include <stack>

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *li = new ListNode();
        ListNode *temp1 = l1, *temp2 = l2;

        while (true)
        {
            if (temp1 && temp2)
            {
                li->val = temp1->val + temp2->val;
                li = new ListNode(0, li);
            }
            else if (temp1 && !temp2)
            {
                li->val = temp1->val;
                li = new ListNode(0, li);
            }
            else if (temp2 && !temp1)
            {
                li->val = temp2->val;
                li = new ListNode(0, li);
            }
            else
            {
                break;
            }
            if (temp1)
                temp1 = temp1->next;
            if (temp2)
                temp2 = temp2->next;
        }

        std::stack<ListNode *> s;

        temp1 = li->next;
        while (temp1)
        {
            s.push(temp1);
            temp1 = temp1->next;
        }

        bool add = false;
        while (!s.empty())
        {
            temp1 = s.top();
            s.pop();

            if (add)
            {
                temp1->val++;
                add = false;
            }

            if (temp1->val > 9)
            {
                temp1->val = temp1->val - 10;
                add = true;
            }
        }

        if (add)
        {
            li->val = 1;

            temp1 = new ListNode();
            while (li)
            {
                temp1->val = li->val;
                li = li->next;
                if (li)
                    temp1 = new ListNode(0, temp1);
            }

            return temp1;
        }
        else
        {
            temp1 = new ListNode();
            li = li->next;
            while (li)
            {
                temp1->val = li->val;
                li = li->next;
                if (li)
                    temp1 = new ListNode(0, temp1);
            }

            return temp1;
        }
    }
};