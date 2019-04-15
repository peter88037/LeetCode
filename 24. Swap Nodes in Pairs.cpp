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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        else if(head->next==NULL)
        {
            return head;
        }
        ListNode* dummy =new ListNode(-1);
        ListNode* rear=head->next;
        dummy->next=rear;
        while(1)
        {
            head->next=head->next->next;
            rear->next=head;                        
            if(head->next==NULL || head->next->next==NULL)
            {
                break;
            }
            ListNode* temp=head;
            head=head->next;
            rear=rear->next->next->next;
            temp->next=temp->next->next;
        }
        return dummy->next;
    }
};		