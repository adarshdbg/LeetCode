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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2, ret;
        if (root1) dfs(root1, v1);
        if (root2) dfs(root2, v2);
        int pos1 = 0, pos2 = 0;
        while (pos1 < v1.size() && pos2 < v2.size())
        {
            if (v1[pos1] < v2[pos2]) ret.push_back(v1[pos1++]);
            else ret.push_back(v2[pos2++]);
        }
        while (pos1 < v1.size()) ret.push_back(v1[pos1++]);
        while (pos2 < v2.size()) ret.push_back(v2[pos2++]);
        return ret;
    }
    void dfs(TreeNode* root, vector<int>& v)
    {
        if (root->left) dfs(root->left, v);
        v.push_back(root->val);
        if (root->right) dfs(root->right, v);
    }
};