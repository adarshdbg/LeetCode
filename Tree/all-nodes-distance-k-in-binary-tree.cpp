/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
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
    unordered_map<TreeNode*,TreeNode*>m;
    unordered_set<TreeNode*>s;
    vector<int>v;
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        if(!root)
            return {};
        
        parent(root);
        dfs(target,K);
        return v;
    }
    void dfs(TreeNode* root,int k)
    {
        if(!root)
            return ;
        if(s.find(root)!=s.end()) return ;
        s.insert(root);
        if(k==0)
        {
            v.push_back(root->val);
            return ;
        }
        dfs(root->left,k-1);
        dfs(root->right,k-1);
        
        TreeNode *p=m[root];
        
        if(p)
            dfs(p,k-1);
    }
    void parent(TreeNode* root)
    {
        if(!root)
            return ;
        
        if(root->left)
        {
            m[root->left]=root;
            parent(root->left);
        }
        if(root->right)
        {
            m[root->right]=root;
            parent(root->right);
        }
    }
};