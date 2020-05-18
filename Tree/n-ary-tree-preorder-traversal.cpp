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
    vector<int> preorder(Node* root) {
        if(root==NULL)
            return {};
        vector<int>v;
        stack<Node*>q;
        q.push(root);
        
        //v.push_back(root->val);
       
            while(!q.empty())
            {
                v.push_back(q.top()->val);
                vector<Node*>a=q.top()->children;
                q.pop();
                for(int i=a.size()-1;i>=0;i--)
                {
                    if(a[i]==NULL)
                        continue;
                    q.push(a[i]);
                }
                
            }
            //swap(p,q);
        
        return v;
        
    }
};