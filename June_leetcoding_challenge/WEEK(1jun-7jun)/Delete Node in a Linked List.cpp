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
    void deleteNode(ListNode* node) {
        
        ListNode* curr=node;
        ListNode* curr1=node;
        while(curr->next)
        {
            curr1=curr;
            curr->val=curr->next->val;
            curr=curr->next;
            
        }
        curr1->next=NULL;
    }
};