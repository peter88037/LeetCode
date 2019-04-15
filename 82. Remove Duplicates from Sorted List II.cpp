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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        ListNode* dummy= new ListNode(-1);
        dummy->next=head;
        head=dummy;
        while(head->next->next!=NULL)
        {
            if(head->next->val==head->next->next->val)
            {
                int tmp=head->next->val;
                head->next=head->next->next;
                
                while(tmp==head->next->val)
                {
                    head->next=head->next->next;
                    if(head->next==NULL)
                    {
                        break;
                    }
                }
            }
            else
            {
                head=head->next;
            }
            if(head->next==NULL)
            {
                break;
            }
        }
        
        return dummy->next;
        
    }
};