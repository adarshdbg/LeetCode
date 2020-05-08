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
    int longestUnivaluePath(TreeNode* root) {
        longest(root);
        return ans;
    }
    int longest(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int left=longest(root->left);
        int right=longest(root->right);
        int p=0,q=0;
        if(root->left!=NULL && root->val==root->left->val)
            p=p + left+1;
        if(root->right!=NULL && root->val==root->right->val)
            q=q+right+1;
        
        ans=max(ans,p+q);
        return max(p,q);
        
    }
    
};