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
    vector<int>v;
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        return v[k-1];
    }
    void inorder(TreeNode* root)
    {
        if(!root)
            return ;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
};