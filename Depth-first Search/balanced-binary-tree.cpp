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
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        return  isBalanced(root->left) && isBalanced(root->right) && abs(istrue(root->left) - istrue(root->right))<2;
    }
    int istrue(TreeNode* a)
    {
        if(!a)
            return 0;
        return max(istrue(a->left),istrue(a->right)) + 1;
    }
};