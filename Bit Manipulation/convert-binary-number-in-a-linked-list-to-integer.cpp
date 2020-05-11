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
    int getDecimalValue(ListNode* head) {
        int num = 0;
        ListNode* curr_node = head;
        while( curr_node != nullptr ) {
            num <<= 1;
            num |= curr_node->val;
            curr_node = curr_node->next;
        }
        return num;
    }
};