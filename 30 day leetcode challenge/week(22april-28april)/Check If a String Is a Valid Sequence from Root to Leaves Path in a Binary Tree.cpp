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
    bool checkPath(TreeNode* root, vector<int>& arr, int index)
    {
         if(root == NULL || index == arr.size())
             return false;
        
         if(root->left == NULL && root->right == NULL && root->val == arr[index] && index == arr.size()-1)
             return true;
       
         return root->val == arr[index] && (checkPath(root->left, arr, index+1) || checkPath(root->right, arr, index+1));
   
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) { 
        return checkPath(root, arr,0);
    }
};