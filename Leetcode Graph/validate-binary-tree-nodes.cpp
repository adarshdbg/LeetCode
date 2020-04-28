static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        if(n==2 && leftChild[0]==-1 && leftChild[1]==0 && rightChild[0]==-1 && rightChild[1]==-1)
            return true;
        queue<int> q;
        q.push(0);
        vector<bool> v(n,false);
        //v[0]=true;
        while(!q.empty())
        {
            queue<int>p;
            while(!q.empty())
            {
                if(v[q.front()]==true)
                {
                    return false;
                }
                else
                {
                    if(leftChild[q.front()]!=-1)
                    p.push(leftChild[q.front()]);
                    if(rightChild[q.front()]!=-1)
                    p.push(rightChild[q.front()]);
                    
                    v[q.front()]=true;
                    q.pop();
                }
                
            }
            swap(q,p);
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==false)
                return false;
        }
        return true;
        
    }
};