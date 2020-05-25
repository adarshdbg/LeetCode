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
    int ans=0,k=INT_MIN;
    int findBottomLeftValue(TreeNode* root) {
        dfs(root,0,true);
        return ans;
    }
    void dfs(TreeNode* root,int h,bool is_left)
    {
        if(!root)
            return;
        
        
        
        dfs(root->left,h+1,true);
        
       
        if(k<h)
        {
            k=h;
            ans=root->val;
        }
        dfs(root->right,h+1,false);
    }
};