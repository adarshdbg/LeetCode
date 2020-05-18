/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
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
    int maxDepth(Node* root) {
        if(root==NULL)
            return 0;
        int depth=0;
        for(auto i:root->children)
            depth=max(depth,maxDepth(i));
        
        return 1+depth;
    }
};