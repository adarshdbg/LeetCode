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
    int sum=0;
    int findTilt(TreeNode* root) {
        find(root);
        return sum;
    }
    int find(TreeNode* root)
    {
        if(!root)
            return 0;
        
        int left=find(root->left);
        int right=find(root->right);
        sum+=abs(left-right);
        return left+right+root->val;
    }
};