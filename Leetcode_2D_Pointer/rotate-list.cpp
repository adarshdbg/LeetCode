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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==NULL) 
            return head;
        int num=1;
        ListNode* current = head;
        ListNode* first = head;
        ListNode* prev = head;
        while (current->next!=NULL)
        {
            num++;
            current=current->next;
        }
        k%=num;
        if (k==0) 
            return head;
        for (int i=0; i<num-k; i++)
        {
            prev = first;
            first = first->next;
        }
        prev->next=NULL;
        current->next=head;
        return first;
    }
};