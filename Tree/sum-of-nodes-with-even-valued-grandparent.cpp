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
    int sumEvenGrandparent(TreeNode* root) {
        return sum(root,9,9);
    }
    int sum(TreeNode* root,int p,int gp)
    {
        if(!root)
            return 0;
        
        return sum(root->left,root->val,p)+sum(root->right,root->val,p)+(gp%2?0:root->val);
    }
};