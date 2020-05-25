/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
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
     Node* connect(Node* root) {
         if(root==NULL)
            return root;
        queue<Node *> q;
        q.push(root);
        while(!q.empty())
        {
           int s=q.size();
            for(int i=0;i<s;i++)
            {
                 Node *temp=q.front();
                q.pop();
                 Node *temp1=q.front();
                if(i==s-1)
                   ;
                  else
                       temp->next=temp1;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
             }
        }
        return root;
   
    }
};