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
    TreeNode* bstToGst(TreeNode* root) {
        int max=0;
        TreeNode* p=root;
        bst(root,&max);
        return p;
    }
    void bst(TreeNode* root,int *max)
    {
        if(root==NULL)
            return ;
        
        bst(root->right,max);
        
        *max=*max+root->val;
        
        root->val=*max;
        
        bst(root->left,max);
    }
};