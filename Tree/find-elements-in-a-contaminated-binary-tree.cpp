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
class FindElements {
public:
    TreeNode* p;
    FindElements(TreeNode* root) {
        p=root;
        root->val=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            queue<TreeNode*>p;
            while(!q.empty())
            {
                auto j=q.front();
                int x=j->val;
                q.pop();
                if(j->left!=NULL)
                {
                    j->left->val=2*x +1;
                    p.push(j->left);
                }
                if(j->right!=NULL)
                {
                    j->right->val=2*x +2;
                    p.push(j->right);
                }
            
            }
            swap(p,q);
        }
    }
    
    bool find(int target) {
        return abc(p,target);
    }
    bool abc(TreeNode* root,int &target)
    {
        if(!root)return false;
        if(root->val==target)
            return true;
        return abc(root->left,target) || abc(root->right,target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */