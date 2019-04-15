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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* back=new ListNode(-1);
        ListNode* front=back;
        int forw=0;
        if((l1==NULL || l1->val==0)&&l1->next==NULL)
        {
            return l2;
        }
        if((l2==NULL || l2->val==0)&&l2->next==NULL)
        {
            return l1;
        }
        while(l1!=NULL && l2!=NULL)
        {
                back->next= new ListNode((l1->val + l2->val + forw)%10);
                forw=(l1->val + l2->val + forw)/10;
                back=back->next;
                l1=l1->next;
                l2=l2->next;
        }
        
        while(forw==1)
        {
            if(l1==NULL && l2==NULL)
            {
                back->next= new ListNode(1);
                forw=0;
            }
            else if(l1!=NULL)
            {
                back->next= new ListNode((l1->val + forw)%10);
                forw=(l1->val + forw)/10;
                back=back->next;
                l1=l1->next;                
            }
            else if(l2!=NULL)
            {
                back->next= new ListNode((l2->val + forw)%10);
                forw=(l2->val + forw)/10;
                back=back->next;
                l2=l2->next;                
            }
        }
        while(l1!=NULL)
        {
            back->next=l1;
            break;
        }
        while(l2!=NULL)
        {
            back->next=l2;
            break;
        }
        
        return front->next;
    }
};