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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       return construct(nums,0,nums.size()-1);
    }
    TreeNode* construct(vector<int>&a,int l, int r)
    {
        auto i=max_element(a.begin()+l,a.begin()+r+1);
        auto p=i-a.begin();
        TreeNode *root=new TreeNode(*i);
        if(l<=p-1)
        root->left=construct(a,l,p-1);
        else
          root->left=NULL;  
        if(r>=p+1)
        root->right=construct(a,p+1,r);
        else
            root->right=NULL;
        return root;
    }
    
};