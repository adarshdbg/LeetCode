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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        return istrue(s,t);
    }
    bool istrue(TreeNode* p,TreeNode* q)
    {
        return (p!=NULL &&(istrue1(p,q) || istrue(p->left,q) || istrue(p->right,q)));
    }
    bool istrue1(TreeNode* a,TreeNode* b)
    {
        if(!a && !b)
            return true;
        if(!a || !b)
            return false;
        return (a->val == b->val && istrue1(a->left,b->left) && istrue1(a->right,b->right));
    }
};