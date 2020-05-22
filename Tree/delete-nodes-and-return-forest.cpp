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
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        set<int>s;
        
        for(auto i:to_delete)
            s.insert(i);
        
        vector<TreeNode*>v;
        dfs(v,s,root);
        if(s.find(root->val)==s.end())
        {
            v.push_back(root);
        }
        return v;
        
    }
    TreeNode* dfs(vector<TreeNode*>&v,set<int>&s,TreeNode* root)
    {
        if(!root)return NULL;
        

        root->left=dfs(v,s,root->left);
        root->right=dfs(v,s,root->right);
        if(s.find(root->val)!=s.end())
        {
            if(root->left)
            v.push_back(root->left);
            if(root->right)
            v.push_back(root->right);
            return NULL;
        }
        
        return root;
    }
};