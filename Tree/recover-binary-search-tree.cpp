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
    TreeNode* f=NULL;
    TreeNode* s=NULL;
    TreeNode* prev=new TreeNode(INT_MIN);
    void recoverTree(TreeNode* root) {
        inorder(root);
        
        swap(f->val,s->val);
    }
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        
        
        inorder(root->left);
        
        if(f==NULL && prev->val>root->val)
            f=prev;
        
        if(f!=NULL && prev->val>root->val)
            s=root;
        
        prev=root;
        
        inorder(root->right);
        
    }
};