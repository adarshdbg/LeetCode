static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
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
class Solution {
public:
    int ans=0;
    void sumroot(int sum, TreeNode* root)
    {
        if(!root)
            return ;
        if(!root->left && !root->right)
        {
            sum= (sum<<1)|root->val;
            ans+=sum;
            return ;
        }
        sum=(sum<<1)|root->val;
        sumroot(sum,root->left);
        
        sumroot(sum,root->right);
        
    }
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        sumroot(sum,root);
        return ans;
    }
};