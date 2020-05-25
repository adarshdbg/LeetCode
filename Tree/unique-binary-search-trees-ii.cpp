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
    
    vector<TreeNode*> generateTree(int from, int to)
    {
        vector<TreeNode*> ret;
        if (from > to)
            ret.push_back(nullptr);
        else if (from == to)
            ret.push_back(new TreeNode(from));
        else
        {
            
            for (int i = from; i <= to; ++i)
            {
                
                vector<TreeNode*> left_subtree = generateTree(from, i - 1);
                
                vector<TreeNode*> right_subtree = generateTree(i + 1, to);

                for (int j = 0; j < left_subtree.size(); ++j)
                {
                    for (int k = 0; k < right_subtree.size(); ++k)
                    {
                        TreeNode* root = new TreeNode(i);
                        root->left = left_subtree[j];
                        root->right = right_subtree[k];
                        ret.push_back(root);
                    }
                }
            }
        }
        return ret;
    }

    vector<TreeNode*> generateTrees(int n)
    {
        if (n == 0)
            return vector<TreeNode*>();
        return generateTree(1, n);
    }
};