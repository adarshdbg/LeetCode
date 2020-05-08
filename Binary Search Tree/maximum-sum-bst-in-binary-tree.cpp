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
    struct Ret {
        int minV;
        int maxV;
        bool isBST;
    };
    int maxSumBST(TreeNode* root) {
        traverse(root);
        return ret;
    }
    
    Ret traverse(TreeNode* root) {
        if (!root) return {INT_MAX, INT_MIN, true};
        Ret left = traverse(root->left);
        Ret right = traverse(root->right);
        int minV = root->val, maxV = root->val;
        if (left.isBST && right.isBST
             && root->val > left.maxV && root->val < right.minV) {
            
            if (root->left) {
                root->val += (root->left ? root->left->val : 0);
                minV = left.minV;
            }
            
            if (root->right) {
                root->val += (root->right ? root->right->val : 0);
                maxV = right.maxV;
            }
            
            ret = max(root->val, ret);
            return {minV, maxV, true};
        }
        return {minV, maxV, false};
    }
private:
    int ret = 0;
};