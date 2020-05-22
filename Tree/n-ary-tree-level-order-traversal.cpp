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
    vector<vector<int>> levelOrder(Node* root) 
	{
        if (root == NULL) 
			return vector<vector<int>>(); 
        vector<vector<int>> res; 
        queue<Node*> q; 
        q.push(root); 
        while (!q.empty()) 
        {
            int size = q.size(); 
            vector<int> curLevel; 
            for (int i = 0; i < size; i++) 
            {
                Node* tmp = q.front(); 
                q.pop(); 
                curLevel.push_back(tmp -> val); 
                for (auto n : tmp -> children) 
                     q.push(n); 
            }
            res.push_back(curLevel); 
        }
        return res; 
    }
};