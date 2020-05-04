/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
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
    ListNode *detectCycle(ListNode *head) {
        ListNode* p=head,*q=head;
        while(q!=NULL && q->next!=NULL)
        {
            p=p->next;
            q=q->next->next;
            if(p==q)
            {
                while(head!=p)
                {
                    p=p->next;
                    head=head->next;
                }
                return head;
            }
        }
        return NULL;
    }
};