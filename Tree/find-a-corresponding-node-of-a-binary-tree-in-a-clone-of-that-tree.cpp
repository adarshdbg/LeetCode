/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
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
    TreeNode* ans;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        abc(original,cloned,target);
        return ans;
    }
    void abc(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
        if(!original)
            return ;
        if(original->val==target->val)
            ans=cloned;
        getTargetCopy(original->left,cloned->left,target);
        getTargetCopy(original->right,cloned->right,target);
        
    }
};