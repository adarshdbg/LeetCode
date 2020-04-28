/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    //0=right,1=left;
    int ans=0;
    int longestZigZag(TreeNode* root) {
        
        dfs(root,0,0);
        dfs(root,1,0);
        return ans;
    }
    int dfs(TreeNode* root,int status,int height)
    {
        if(!root) return 0;
        ans=max(ans,height);
        if(status==0)
        {
            dfs(root->left,1,height+1);
            dfs(root->right,0,1);
        }
        else
        {
            dfs(root->right,0,height+1);
            dfs(root->left,1,1);
        }
        return ans;
        
    }
};