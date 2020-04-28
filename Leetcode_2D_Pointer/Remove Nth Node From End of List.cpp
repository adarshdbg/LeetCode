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
        int count=0,i=0;
        ListNode* curr=head;
         ListNode* temp=NULL;
       ListNode*  prev=NULL;
        while(curr!=NULL)
        {
            count++;
            curr=curr->next;
        }
        
        if(count-n==0)
        {
            temp=head->next;
            head=NULL;
            
            return temp;
        }
        else
        {
            curr=head;
           while(i<count-n)
           {
               prev=curr;
               curr=curr->next;
               i++;
               
           }
            prev->next=curr->next;
           curr->next=NULL;
        //free(curr);
        return head;
        }
        
    }
};