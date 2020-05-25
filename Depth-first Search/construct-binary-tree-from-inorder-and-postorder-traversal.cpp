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
    unordered_map<int,int>m;
    int l;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        int n=inorder.size();
        l=n-1;
        return insert(postorder,inorder,0,n-1);
    }
    TreeNode* insert(vector<int>&A,vector<int>&B,int p,int q){
        
        
        if(p>q)
            return NULL;
        
        
        TreeNode * root=new TreeNode(A[l]);
        int k=m[A[l]];
        l--;
         root->right=insert(A,B,k+1,q); 
        root->left=insert(A,B,p,k-1);
        
    
        return root;
    }
};