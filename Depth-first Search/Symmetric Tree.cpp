/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    public:
    bool is(TreeNode* l,TreeNode* r)
    {
       if(l == NULL && r == NULL) 
           return true;
        // if(l==NULL || r==NULL)
        //     return false;
        if (l && r && (l->val == r->val))
           return is(l->left,r->right) && is(l->right,r->left);
                    
      return false;
    }
    
public:
    bool isSymmetric(TreeNode* root) {
      return is(root,root);
            
        
    }

};