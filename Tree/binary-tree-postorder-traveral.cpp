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
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        
        stack<TreeNode*>s;
        TreeNode* last=NULL;
        //s.push(root);
        
        while(root || !s.empty())
        {
            if(root)
            {
                s.push(root);
                root=root->left;
            }
            else
            {
                TreeNode* p=s.top();
                if(p->right && last!=p->right)
                {
                    root=p->right;
                }
                else
                {
                    ans.push_back(p->val);
                    last=p;
                    s.pop();
                }
            }
        }
        return ans;
    }
};