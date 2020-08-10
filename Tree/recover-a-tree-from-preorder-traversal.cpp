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
    TreeNode* preorder(string &s,int &start,int i)
    {
        int j=s.find_first_of("1234567890",start);
        int k=s.find('-',j);
    
        if(j-start == i)
        {
            TreeNode* root=new TreeNode(stoi(s.substr(j,k-j)));
            start=k;
            root->left=preorder(s,start,i+1);
            root->right=preorder(s,start,i+1);
            return root;
        }
        
        
        return NULL;
    }
    TreeNode* recoverFromPreorder(string s) {
        int i=s.find('-');
        
        TreeNode* root=new TreeNode(stoi(s.substr(0,i)));
        
        root->left=preorder(s,i,1);
        root->right=preorder(s,i,1);
        
        return root;
    }
};