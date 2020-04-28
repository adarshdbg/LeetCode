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
    TreeNode* construct(vector<int>&preorder,int* index,int l,int h,int size)
    {
        if(*index>=size || l>h)
            return NULL;
        TreeNode* root = new TreeNode(preorder[*index]);  
    *index =*index + 1;  
  
    // If the current subarry has only one element, no need to recur  
    if (l == h)  
        return root;  
  
    // Search for the first element greater than root  
    int i;  
    for ( i = l; i <= h; ++i )  
        if ( preorder[ i ] > root->val )  
            break;  
  
    // Use the index of element found in preorder to divide  
        // preorder array in two parts. Left subtree and right subtree  
    root->left = construct ( preorder, index, *index,i - 1, size );  
    root->right = construct ( preorder, index, i, h, size );  
  
    return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        int index = 0; 
        TreeNode* node=construct(preorder,&index,0,n-1,n);
        return node;
    }
};