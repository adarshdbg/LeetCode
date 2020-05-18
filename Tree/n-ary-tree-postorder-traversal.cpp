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

class Solution {
public:
    vector<int> postorder(Node* root) {
         if(root==NULL)
            return {};
        vector<int>v;
        stack<Node*>q;
        q.push(root);
        
        //v.push_back(root->val);
       
            while(!q.empty())
            {
                v.push_back(q.top()->val);
                if((q.top()->children).size())
                {
                    vector<Node*>a=q.top()->children;
                     q.pop();
                    for(int i=0;i<=a.size()-1;i++)
                    {
                        if(a[i]==NULL)
                            continue;
                        q.push(a[i]);
                    }
                }
                else
                q.pop();
                
            }
            //swap(p,q);
        
        
        reverse(v.begin(),v.end());
        return v;
    }
};