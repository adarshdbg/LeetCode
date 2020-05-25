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
    //TreeNode *root;
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return sorted(nums,0,nums.size()-1);
    }
    
    TreeNode* sorted(vector<int>&a,int l,int r)
    {
        if(r<l)
            return NULL;
        int mid=(r+l)/2;
        TreeNode *root=new TreeNode(a[mid]);
        
        root->left=sorted(a,l,mid-1);
        root->right=sorted(a,mid+1,r);
        
        return root;
        
    }
};