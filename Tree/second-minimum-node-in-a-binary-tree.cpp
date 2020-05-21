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
    int p;
    long ans=10000000000;
    void dfs(TreeNode* root)
    {
        if(!root)
        return ;
        
        if(root->val >p && ans > root->val)
            ans=root->val;
        else
        {
            dfs(root->left);
            dfs(root->right);
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
         p=root->val;
        dfs(root);
        
        return ans==10000000000?-1:ans;
    }
};