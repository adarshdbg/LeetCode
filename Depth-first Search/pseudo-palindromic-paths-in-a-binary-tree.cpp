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
    vector<vector<int>>v;
    vector<int>a;
    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root,a);
        int n=v.size();
        vector<vector<int>>ans(n,vector<int>(10,0));
//         for(int i=0;i<n;i++)
//         {
//             for(auto j:v[i])
//                 cout<<j;
            
//             cout<<endl;
//         }
        for(int i=0;i<n;i++)
        {
            for(auto j:v[i])
                ans[i][j]++;
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            int p=0;
            for(auto j:ans[i])
            {
                if(j%2==1)
                    p++;
            }
            if(p<=1)
               k++; 
        }
        return k;
        
    }
    void dfs(TreeNode* root,vector<int>a)
    {
        if(!root)
        {
            return;
        }
        if(!root->left && !root->right)
        {
            a.push_back(root->val);
             v.push_back(a);
            //a.pop_back();
            return;
        }
        
        a.push_back(root->val);
        dfs(root->left,a);
        //a.pop_back();
        dfs(root->right,a);
    }
};