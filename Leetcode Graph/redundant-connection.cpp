static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int find(vector<int>&parent,int x)
    {
        return parent[x]==x?x:find(parent,parent[x]);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        
        vector<int>parent(n+1);
        
        for(int i=1;i<=n;i++)
        {
            parent[i]=i;
        }
        
        for(int i=0;i<n;i++)
        {
            int a=find(parent,edges[i][0]);
            int b=find(parent,edges[i][1]);
            
            if(a==b)
                return {edges[i][0],edges[i][1]};
            
            parent[a]=b;
        }
        
        
        return {};
        
        
        
    }
};