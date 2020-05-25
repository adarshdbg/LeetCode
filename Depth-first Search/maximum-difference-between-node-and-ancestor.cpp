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
    int ans=0;
    int maxAncestorDiff(TreeNode* root) {
         maxvalue(root,-1,INT_MAX);
        
        return ans;
    }
    void maxvalue(TreeNode* root,int l,int r)
    {
        if(!root)
            return;
        
        l=max(l,root->val);
        r=min(r,root->val);
        ans=max(ans,abs(l-r));
        maxvalue(root->left,l,r);
        maxvalue(root->right,l,r);
        
    }
};