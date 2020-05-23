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
class CBTInserter {
public:
    vector<TreeNode*>v;
    
    CBTInserter(TreeNode* root) {
        v.push_back(root);
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]->left)
                v.push_back(v[i]->left);
            
            if(v[i]->right)
              v.push_back(v[i]->right);  
        }
    }
    
    int insert(int v1) {
        TreeNode* root=new TreeNode(v1);
        v.push_back(root);
        int n=v.size()-1;
        TreeNode* p=v[(n-1)/2];
        if(!p->left)
            p->left=root;
        else
            p->right=root;
        return p->val;
    }
    
    TreeNode* get_root() {
        return v[0];
    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(v);
 * TreeNode* param_2 = obj->get_root();
 */