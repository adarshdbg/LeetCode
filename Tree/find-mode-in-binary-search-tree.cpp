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
    vector<int> findMode(TreeNode* root) {
        if(!root)
            return {};
        inorder(root);
        vector<int>v;
        int p=INT_MIN;
        for(auto &i:m)
            p=max(p,i.second);
        for(auto &i:m)
        {
            if(i.second == p)
            {
                v.push_back(i.first);
            }
        }
        return v;
            
    }
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        
        m[root->val]++;
        inorder(root->left);
        inorder(root->right);
    }
};