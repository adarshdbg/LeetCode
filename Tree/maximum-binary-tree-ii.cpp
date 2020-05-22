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
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        if (root && root->val > val) {
            root->right = insertIntoMaxTree(root->right, val);
            return root;
        }
        TreeNode* node = new TreeNode(val);
        node->left = root;
        return node;
    }
};