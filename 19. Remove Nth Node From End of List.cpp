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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* front=new ListNode(-1);
        front->next=head;
        ListNode* rear=front;
        ListNode* dummy=front;
        for(int i=0;i<n;i++)
        {
            rear=rear->next;
        }
        while(rear->next!=NULL)
        {
            front=front->next;
            rear=rear->next;
        }
        front->next=front->next->next;
        return dummy->next;
    }
};