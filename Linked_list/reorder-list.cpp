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
        vector<int>v;
        ListNode* ptr=head;
        while(ptr)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        int i=0,j=v.size()-1;
        ptr=head;
        while(i<=j)
        {
            ptr->val=v[i++];
            ptr=ptr->next;
            if(i<j)
            {
                ptr->val=v[j];
                //i++;
                j--;
                ptr=ptr->next;
            }
        }
        //return head;
    }
};