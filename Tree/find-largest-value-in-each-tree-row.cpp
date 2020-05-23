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
    vector<int> largestValues(TreeNode* root) {
        if(!root)
            return {};
        vector<int>v;
        queue<TreeNode*>q;
        //v.push_back(root->val);
        q.push(root);
        
        while(!q.empty())
        {
            queue<TreeNode*>p;
            int l=INT_MIN;
            while(!q.empty())
            {
                auto i=q.front();
                if(i->val>l)
                   l=i->val;
                q.pop();
                if(i->left)
                {
                    p.push(i->left);
                }
                if(i->right)
                {
                    p.push(i->right);
                }
                
            }
            swap(p,q);
            v.push_back(l);
        }
        return v;
    }
};