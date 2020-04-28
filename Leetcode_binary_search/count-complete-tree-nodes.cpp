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
    int countNodes(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==NULL)
            return 0;
        q.push(root);
        int ans=1;
        
        while(!q.empty())
        {
            queue<TreeNode*>p;
            while(!q.empty())
            {
                if(q.front()->left)
                {
                p.push(q.front()->left);
                ans++;
                //q.pop();
                }
                if(q.front()->right)
                {
                p.push(q.front()->right);
                ans++;
                
                }
                q.pop();
                
            }
            swap(p,q);
        }
        return ans;
    }
};