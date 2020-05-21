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
    unordered_map<int,int>m;
    int ans=0;
    int pathSum(TreeNode* root, int sum) {
        m[0]++;
        int sum1=0;
        path(root,sum,sum1);
        return ans;
    } 
    void path(TreeNode* root,int sum,int sum1)
    {
        if(root==NULL)
            return ;
        
        sum1+=root->val;
        
        if(m.find(sum1-sum)!=m.end())
        {
            ans+=m[sum1-sum];
        }
        m[sum1]++;
        path(root->left,sum,sum1);
        path(root->right,sum,sum1);
        m[sum1]--;
    }
};