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
    int sum=0;
    int rangeSumBST(TreeNode* root, int L, int R) {
        
        rangesum(root,L,R,&sum);
        return sum;
        
    }
    void rangesum(TreeNode*root,int l,int r,int *sum)
    {
        if(root==NULL)
            return ;
        rangesum(root->left,l,r,sum);
        if(root->val>=l && root->val<=r)
            *sum+=root->val;
        rangesum(root->right,l,r,sum);
    }
};