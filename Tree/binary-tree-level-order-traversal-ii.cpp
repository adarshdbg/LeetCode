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
    vector<vector<int>>v;
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)
            return{};
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            queue<TreeNode*>p;
            vector<int>ans;
            while(!q.empty())
            {
                ans.push_back(q.front()->val);
                if(q.front()->left!=NULL)
                    p.push(q.front()->left);
                if(q.front()->right!=NULL)
                    p.push(q.front()->right);
                
                q.pop();
                    
            }
            swap(q,p);
            v.push_back(ans);
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};