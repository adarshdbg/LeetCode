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
    unordered_map<int, int> m; // value->index
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        int len = post.size();
        for (int i = 0; i < len; i++) m[post[i]] = i;
        return construct(pre, post, 0, len - 1, 0, len - 1);
    }
    
    TreeNode* construct(vector<int>& pre, vector<int>& post, int a, int b, int c, int d) {
        TreeNode* n = new TreeNode(pre[a]);
        if (a == b) return n;
        int t = pre[a + 1];
        int idx = m[t];
        int len = idx - c + 1;
        n->left = construct(pre, post, a + 1, a + len, c, c + len - 1);
        if (idx + 1 == d) return n;
        n->right = construct(pre, post, a + len + 1, b, idx + 1, d - 1);
        return n;
    }
};