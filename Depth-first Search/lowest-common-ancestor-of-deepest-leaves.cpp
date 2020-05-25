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
    pair<TreeNode*,int> dfs(TreeNode* root)
    {
        if(!root)
            return {NULL,0};
        auto l=dfs(root->left);
        auto r=dfs(root->right);
        
        if(l.second>r.second)
            return {l.first,l.second+1};
        if(l.second<r.second)
            return {r.first,r.second+1};
        
        return {root,r.second+1};
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return dfs(root).first;
    }
};