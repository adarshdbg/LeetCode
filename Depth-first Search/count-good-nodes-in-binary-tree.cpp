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
    int p=INT_MIN;
   int  ans=0;
    int goodNodes(TreeNode* root) {
        noof(root,p);
        return ans;
        
    }
    void noof(TreeNode*root,int p)
    {
        if(!root)
            return ;
        if(root->val>=p)
        {
            p=root->val;
            ans++;
        }
        noof(root->left,p);
        noof(root->right,p);
    }
};