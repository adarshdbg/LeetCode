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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        TreeNode* root=new TreeNode(preorder[0]);
        TreeNode* q=root;
        for(int i=1;i<preorder.size();i++)
        {
            
            root=q;
            while(1)
            {
                if(root->left==NULL && root->val>preorder[i])
                {
                    TreeNode* p=new TreeNode(preorder[i]);
                    root->left=p;
                    break;
                }
                if(root->right==NULL && root->val<preorder[i])
                {
                    TreeNode* p=new TreeNode(preorder[i]);
                    root->right=p;
                    break;
                }
                if(root->val>preorder[i])
                    root=root->left;
                else
                    root=root->right;
            }
        }
        return q;
    }
    
};