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
    vector<vector<string>> printTree(TreeNode* root) {
        int n=height(root);
        
        int m=pow(2,n) - 1;
       vector<vector<string>>v(n,vector<string>(m));
        print(v,root,0,0,m-1);
        return v;
        
    }
    void print(vector<vector<string>>&v,TreeNode * root,int row,int l,int r)
    {
        if(!root)
            return ;
        if(l<=r)
        {
        v[row][(l+r)/2]=to_string(root->val);
        print(v,root->left,row+1,l,(l+r)/2 - 1);
        print(v,root->right,row+1,(l+r)/2 + 1,r);
        }
    }
    int height(TreeNode* root)
    {
        if(!root)
            return 0;
        int l=height(root->left);
        int r=height(root->right);
         return max(l,r)+1;
    }
};