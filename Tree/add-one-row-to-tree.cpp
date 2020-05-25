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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d==1)
        {
            TreeNode* p=new TreeNode(v);
            p->left=root;
            return p;
        }
        
        dfs(root,v,d);
        return root;
    }
    void dfs(TreeNode* root,int v,int d)
    {
        if(!root)
            return ;
        if(d==2)
        {
            
                TreeNode* p=new TreeNode(v);
                p->left=root->left;
                root->left=p;
            
            
                TreeNode* q=new TreeNode(v);
                q->right=root->right;
                root->right=q;
            
        }
        dfs(root->left,v,d-1);
        dfs(root->right,v,d-1);
    }
};