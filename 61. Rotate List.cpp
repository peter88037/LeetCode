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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL)
        {
            return head;
        }
        ListNode* tmp=head;
        int len=1;
        while(tmp->next!=NULL)
        {
            tmp=tmp->next;
            len++;
        }
        k=k%len;
        tmp->next=head;
        k=len-k;
        while(k>0)
        {
            tmp=tmp->next;
            head=head->next;
            k--;
        }
        tmp->next=NULL;
        return head;
    }
};