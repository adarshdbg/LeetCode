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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        
        queue<TreeNode*>q;
        int i=1;
        //v.push_back(root->val);
        q.push(root);
        while(!q.empty())
        {
            queue<TreeNode*>p;
            double sum=0;
            i=0;
            while(!q.empty())
            {
                sum+=q.front()->val;
                i++;
                if(q.front()->left!=NULL)
                p.push(q.front()->left);
                if(q.front()->right!=NULL)
                p.push(q.front()->right);
                //cout<<"1"<<" ";
                q.pop();
            }
            v.push_back(sum/i);
            swap(p,q);
            
        }
        return v;
    }
};