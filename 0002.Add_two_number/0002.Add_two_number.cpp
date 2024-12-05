#include <iostream>
using namespace std;


 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l = NULL;
        ListNode* i = l1;
        ListNode* j = l2;
        ListNode* k = l;
        int c = 0;
        int s = 0;
        while (!(i == NULL && j == NULL))
        {
            if (i == NULL)
                s = j->val + c;
            else if (j == NULL)
                s = i->val + c;
            else 
            {
                s = i->val + j->val + c;
            }
            if (l == NULL)
            {
                l = new ListNode(s % 10);
                k = l;
            }
            else
            {
                k->next = new ListNode(s % 10);
                k = k->next;
            }
            c = s / 10;
            if (i != NULL)
                i = i->next;
            if (j != NULL)
                j = j->next;
        }
        if (c > 0)
        {
            k->next = new ListNode(c);
            k = k->next;
        }
        return l;
    }
};

int main()
{
    ListNode* l1 = new ListNode(6);
    ListNode* l2 = new ListNode(6);
    Solution s;
    ListNode* l = s.addTwoNumbers(l1, l2);
    ListNode* i = l;
    //cout << l->val;
    while (i != NULL)
    {
        cout << i->val;
        i = i->next;
    }
    return 0;
}
