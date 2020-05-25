static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    
    unordered_map<int,vector<int>>m;
    vector<bool>v;
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        v.resize(n);
        for(auto i:edges)
        {
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(i[0]);
        }
        v=hasApple;
        return  dfs(0,0).first; 
    }
    pair<int,int> dfs(int node,int p)
    {
        pair<int,int>i={0,v[node]};
        
        for(auto j:m[node])
        {
            if(j!=p)
            {
                auto x=dfs(j,node);
                i.first+=(x.first+2)*x.second;
                i.second|=x.second;
            }
        }
        return i;
    }
};