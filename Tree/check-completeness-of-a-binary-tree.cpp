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
 */static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if(!root)
            return true;
        
       vector<TreeNode*>v;
        v.push_back(root);
        int i=0;
        while(i<v.size() && v[i])
        {
            v.push_back(v[i]->left);
            v.push_back(v[i]->right);
            i++;
        }
        while(i<v.size() && !v[i])
          i++;
        
        return i==v.size();
    }
};