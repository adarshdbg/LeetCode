/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(!root)
            return {};
        deque<TreeNode*>p;
            
       
        p.push_back(root);
        int k=0;
        while(!p.empty())
        {
            deque<TreeNode*>q;
            vector<int>a;
            while(!p.empty())
            {
                auto i=p.back();
                p.pop_back();
                a.push_back(i->val);
                if(k==1)
                {
                    if(i->right)
                        q.push_back(i->right);
                    if(i->left)
                        q.push_back(i->left);
                }
                if(k==0)
                {
                     if(i->left)
                        q.push_back(i->left);
                    if(i->right)
                        q.push_back(i->right);
                   
                }
                
            }
            swap(p,q);
            v.push_back(a);
            k^=1;
        }
        return v;
    }
};