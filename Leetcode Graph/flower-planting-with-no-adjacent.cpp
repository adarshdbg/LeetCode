
static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
    vector<vector<int>> g;
vector<int> plant;
vector<int> c1;
public:
    void dfs(int v)
    {
        c1.assign(5,0);
        for(int i=0;i<g[v].size();i++)
        {
            c1[plant[g[v][i]]]=1;
        }
        for(int i=1;i<=4;i++)
        {
            if(c1[i]==0)
            {
                plant[v]=i;
                break;
            }
        }
        for(int i=0;i<g[v].size();i++)
        {
            if(plant[g[v][i]]==0)
                dfs(g[v][i]);
        }
        
    }
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        g.resize(n+1);
        plant.assign(n+1,0);
        for(int i=0;i<paths.size();i++)
        {
            g[paths[i][0]].push_back(paths[i][1]);
            g[paths[i][1]].push_back(paths[i][0]);
        }
        
        for(int i=1;i<=n;i++)
        {
            if(plant[i]==0)
            {
                dfs(i);
            }
        }
        plant.erase(plant.begin());
        return plant;
    }
};