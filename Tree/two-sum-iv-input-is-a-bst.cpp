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
    map<int,int>m;
    bool findTarget(TreeNode* root, int k) {
        if(!root)
          return false;
        
        int p=root->val;
        if(m[k-p]>=1)
            return true;
        m[p]++;
        
        return findTarget(root->left,k)||findTarget(root->right,k);
    }
};