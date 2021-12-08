static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        map<int,vector<int>>m;
        vector<bool>vis(n,false);
        for(auto &i:edges)
        {
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(i[0]);
        }
        
        queue<int>q;
        q.push(start);
        
        while(!q.empty())
        {
            int i=q.front();
            vis[i]=true;
            if(i==end)
                return true;
            q.pop();
            for(auto &j:m[i])
            {
                if(!vis[j])
                q.push(j);
            }
        }
        
        return false;
    }
};