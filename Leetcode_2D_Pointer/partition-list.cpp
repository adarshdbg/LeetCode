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
static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* i_1=new ListNode();
        ListNode* p=i_1;
        ListNode* q=head;
        int i=0,j=0;
        if(head==NULL)
            return head;
        if(head->next==NULL)
            return head;
        while(q!=NULL)
        {
            i++;
            q=q->next;
        }
        q=head;
        while(q!=NULL)
        {
            if(q->val<x)
            {
                j++;
                p->val=q->val;
                if(i-j!=0)
                {
                p->next=new ListNode();
                p=p->next;
                }
            }
            
            q=q->next;
        }
        
         ListNode* q1=head;
        while(q1!=NULL)
        {
           
            if(q1->val>=x)
            {
                j++;
                p->val=q1->val;
                if(i-j!=0)
                {
                p->next=new ListNode();
                p=p->next;
                }
            }
            
            q1=q1->next;
        }
         
        
        return i_1;
        
    }
};