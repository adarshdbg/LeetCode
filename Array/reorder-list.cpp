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
class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) 
            return;
        ListNode* ptr=head;
        ListNode* p=head,*q=head->next;
        
        while(q && q->next)
        {
            p=p->next;
            q=q->next->next;
        }
        
        ListNode *head2 = p->next;
        p->next = NULL;
        q=head2;
        head2=NULL;
        while(q)
        {
            p=q->next;
            q->next=head2;
            head2=q;
            q=p;
        }
        for (p = head, q = head2; p; ) {
        auto t = p->next;
        p->next = q;
            p=q;
        q = t;
    }
        
    }
};