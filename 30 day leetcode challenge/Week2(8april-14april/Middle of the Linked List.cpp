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
    ListNode* middleNode(ListNode* head) {
        ListNode *next1=head;
        int count=1;
        while(next1->next)
        {
            count++;
            next1=next1->next;
        }
        count=count/2;
        next1=head;
        for(int i=0;i<count;i++)
            next1=next1->next;
        
        return next1;
            
    }
};