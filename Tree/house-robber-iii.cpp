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
    int rob(TreeNode* root) {
        return max(dfs(root).first,dfs(root).second);
    }
    pair<int,int> dfs(TreeNode* root)
    {
        if(!root)
            return {0,0};
        auto l=dfs(root->left);
        auto r=dfs(root->right);
        
        int p=l.second+r.second;
        int q=max(root->val+l.first+r.first,p);
       return {p,q}; 
        
    }
};