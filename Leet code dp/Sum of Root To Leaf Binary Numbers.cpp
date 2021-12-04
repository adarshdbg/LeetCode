static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
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
class Solution {
public:
    void sumroot(int &sum, TreeNode* root,string &s)
    {
        if(!root)
            return ;
        if(!root->left && !root->right)
        {
            s+=('0'+root->val);
            std::bitset<1001> b1(s); 
            sum+= b1.to_ulong();
            s.pop_back();
            return ;
        }
        s+=('0'+root->val);
        sumroot(sum,root->left,s);
        
        sumroot(sum,root->right,s);
        s.pop_back();
        
    }
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        string s="";
        sumroot(sum,root,s);
        return sum;
    }
};