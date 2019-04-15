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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* dummy=new ListNode(-1), *one=dummy,*two=dummy;
        dummy->next=head;
        head=dummy;
        
        for(int i=0;i<m-1;i++)
        {
            head=head->next;
        }
        one=head->next;
        two=head->next->next;
        for(int i=0;i<n-m;i++)
        {
            ListNode* tmp=two->next;
            two->next=one;
            one=two;
            two=tmp;
        }
        head->next->next=two;
        head->next=one;
        
        return dummy->next;
    }
};