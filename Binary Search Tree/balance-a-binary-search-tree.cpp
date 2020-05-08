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
   void storenodes(TreeNode* root,vector<TreeNode*> &nodes)
{
    if(root==NULL)
    {
    return;
    }
    storenodes(root->left,nodes);
    nodes.push_back(root);
    storenodes(root->right,nodes);
}
TreeNode* builttree(vector<TreeNode*> &nodes,int start,int end)
{
    if(start>end)
    {
    return NULL;
    }
    int mid=(start+end)/2;
    TreeNode* root=nodes[mid];
    root->left=builttree(nodes,start,mid-1);
    root->right=builttree(nodes,mid+1,end);
    return root;

}
TreeNode* balanceBST(TreeNode* root) {
    if(root==NULL)
    {
    return NULL;
    }
    vector<TreeNode*> nodes;
    storenodes(root,nodes);
    TreeNode* node=builttree(nodes,0,nodes.size()-1);
    return node;

    }
    
    
};