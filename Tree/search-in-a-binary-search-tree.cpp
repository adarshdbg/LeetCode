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
    TreeNode* p=NULL;
    TreeNode* searchBST(TreeNode* root, int val) {
        search(root,val);
        return p;
        
    }
    void search(TreeNode* root, int val)
    {
        if(root==nullptr)
            return;
        if(root->val==val)
        {
            p=root;
            return ;
        }
        search(root->left,val);
        search(root->right,val);
    }
};