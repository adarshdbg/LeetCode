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
    TreeNode* p;
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        find(root,x);
        int l=0,r=0;
        height(p->left,l);
        height(p->right,r);
        int q=max(l,r);
        if(root->val!=x)
        {
            q=max(n-(l+r+1),q);
        }
        return q>=(n-q);
    }
     void height(TreeNode* root,int &l)
    {
        if(root)
        {
            l++;
            height(root->left,l);
            height(root->right,l);
        } 
    }
    void find(TreeNode* root,int x)
    {
        if(!root)
            return ;
        if(root->val==x)
        {
            p=root;
            return ;
        }
        find(root->left,x);
        find(root->right,x);
    }
};