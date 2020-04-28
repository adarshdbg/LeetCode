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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        vector<TreeNode*> v{root};
        int lvl=0,msum=INT_MIN,mlv=0,sum=0;
            while(!v.empty())
            {
                vector<TreeNode*> u;
                lvl++;
        
                for(auto i:v)
                {
                    sum+=i->val;
                    if(i->left!=NULL)
                        u.push_back(i->left);
                    if(i->right!=NULL)
                        u.push_back(i->right);
                }
                if(msum<sum)
                {
                    msum=sum;
                    mlv=lvl;
                }
                sum=0;
                v=u;
            }
        return mlv;
    }
};