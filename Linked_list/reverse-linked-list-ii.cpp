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
    ListNode* reverse(ListNode* head,ListNode* curr2,int m)
    {
        ListNode* prev=new ListNode(0),*next1=prev,*curr=head,*curr1=head;
        while(m--)
        {
            next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
            
        }
        //cout<<curr->val;
        curr1->next=curr;
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* curr1=head;
        //n--;
        int p=n-m;
        if(p==0)
            return head;
        while(n--)
        {
            curr1=curr1->next;
        }
        //cout<<curr1->val<<" ";
        if(m==1)
        {
            head=reverse(curr,curr,p+1);
            return head;
        }
        while(m-->=2)
        {
            prev=curr;
            curr=curr->next;
        }
        //cout<<curr->val<<" ";
        prev->next=reverse(curr,curr1,p+1);
        //cout<<prev->next->val;
        return head;
        
        
        
    }
};