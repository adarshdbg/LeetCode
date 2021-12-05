static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
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
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n==1)
        {
            vector<TreeNode*>ans;
            ans.push_back(new TreeNode());
            
            return ans;
        }
        vector<TreeNode*>ans;
        
        for(int i=1;i<n;i+=2)
        {
            vector<TreeNode*> l=allPossibleFBT(i);
            vector<TreeNode*> r=allPossibleFBT(n-i-1);
            
            for(int i=0;i<l.size();i++){
                for(int j=0;j<r.size();j++){
                    TreeNode* root=new TreeNode(0);
                    root->left=l[i];
                    root->right=r[j];
                    ans.push_back(root);
                }
            }
            
        }
        return ans;
        
        
    }
};