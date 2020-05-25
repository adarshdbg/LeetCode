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
     unordered_set<int>dp;
    
    int sum(TreeNode* root) {
        if (!root) return 0;
        
        int val = root->val + sum(root->left) + sum(root->right);
        dp.insert(val);
        
        return val;
    }
    int maxProduct(TreeNode* root) {
        if (!root) return 0;
       
        unsigned long long ans = 0;
        unsigned long long tsum = sum(root);
        
        for (auto it = dp.begin(); it != dp.end(); it++) {
            ans = max(ans, (*it)*(tsum-*it));
        }
        
        return ans%1000000007;
    }
};