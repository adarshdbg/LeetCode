static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        for(int i=0;i<stones.size();i++)
        {
            q.push(stones[i]);
        }
        while(q.size()>1)
        {
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
             a=a-b;
            if(a>0)
                q.push(a);
        }
        if(q.size()==1)
            return q.top();
        else
            return 0;
        
        
    }
};