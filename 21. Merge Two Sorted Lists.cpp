/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *front = new ListNode(-1);
        ListNode *rear = front;
        if(l1==NULL)
        {
            return l2;
        }
        else if(l2==NULL)
        {
            return l1;
        }
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<l2->val)
            {
                rear->next=l1;
                rear=rear->next;
                l1=l1->next;
            }
            else
            {
                rear->next=l2;
                rear=rear->next;
                l2=l2->next;
            }
        }
        if(l1!=NULL)
        {
                rear->next=l1;
        }
        if(l2!=NULL)
        {
                rear->next=l2;
        }

        return front->next;
    }
};