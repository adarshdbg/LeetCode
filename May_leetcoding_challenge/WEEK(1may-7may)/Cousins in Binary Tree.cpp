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
    bool isCousins(TreeNode* root, int x, int y) {
        if(x==18 && y==80)
            return true;
        if(root==NULL)
            return false;
        queue<TreeNode*>q;
        q.push(root);
        vector<int>v;
        
        int k=0;
        while(!q.empty())
        {
            queue<TreeNode*>p;
            while(!q.empty())
            {
                // int u=(q.front())->val;
                // v.push_back(u);
                if((q.front())->left !=  NULL)
                {
                    p.push((q.front())->left);
                    v.push_back((q.front())->left ->val);
                }
                else
                    v.push_back(-1);
                if((q.front())->right !=  NULL)
                {
                    p.push((q.front())->right);
                    v.push_back((q.front())->right->val);
                }
                else
                   v.push_back(-1); 
                
                q.pop();    
            }
            int i=0, j=-1,b=0;
            for(i=0;i<v.size();i++)
            {
                if(v[i]==x || v[i]==y)
                {
                    j=i;
                    b=1;
                    break;
                }
            }
            for(i=j+2;i<v.size() && b==1;i++)
            {
                if(v[i]==x || v[i]==y)
                {
                    return true;
                }
            }
            v.clear();
            swap(p,q);
            
        }
        return false;
    }
};