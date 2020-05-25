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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a;
        vector<int>b;
        find1(root1,a);
        find1(root2,b);
        return a==b;
    }
    void find1(TreeNode* root,vector<int>&a)
    {
        if(!root)
            return ;
        if(!root->left && !root->right)
        {
            a.push_back(root->val);
            return ;
        }
        
        find1(root->left,a);
        find1(root->right,a);
    }
};