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
    int sumNumbers(TreeNode *root) {
        if(!root)
            return 0;
        sum=0;
        DFS(root, 0);
        return sum;
    }
    
    void DFS(TreeNode *&node, int currentSum)
    {
        currentSum=currentSum*10+node->val;
        if(!node->left&&!node->right)
            sum+=currentSum;
        if(node->left)
            DFS(node->left, currentSum);
        if(node->right)
            DFS(node->right, currentSum);
    }
private:
    int sum;
};