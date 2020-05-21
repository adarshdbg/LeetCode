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
    TreeNode*p;
    int minDepth(TreeNode* root) {
        if (root==nullptr){
            return 0;
        }
        else if (root->right==nullptr||root->left==nullptr){
            return max(minDepth(root->left),minDepth(root->right))+1;
        }
        else{
            return min(minDepth(root->left),minDepth(root->right))+1;
        }
    }
};