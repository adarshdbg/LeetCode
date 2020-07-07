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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)
            return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>v;
        
        //v.push_back(root->val);
        while(!q.empty())
        {
            queue<TreeNode*>p;
            vector<int>l;
            while(!q.empty())
            {
                TreeNode* root1=q.front();
                q.pop();
                l.push_back(root1->val);
                if(root1->left!=NULL)
                    p.push(root1->left);
                if(root1->right!=NULL)
                    p.push(root1->right);
            }
            swap(p,q);
            v.push_back(l);
        }
        
        // for(int i=0;i<v.size();i++)
        // {
        //     for(int j=0;j<v[i].size();j++)
        //     {
        //         cout<<v[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        vector<vector<int>>ans;
        
        for(int i=v.size()-1;i>=0;i--)
        {
            ans.push_back(v[i]);
        }
        return ans;
    }
};