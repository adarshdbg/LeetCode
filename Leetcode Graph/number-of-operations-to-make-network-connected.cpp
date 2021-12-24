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
        return parent[x]=parent[x]==x?x:find(parent,parent[x]);
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        int e=connections.size();
        
        if(e<n-1)
            return -1;
         
        vector<int>parent(n);
        vector<bool>vis(n);
        for(int i=0;i<n;i++)
            parent[i]=i;
    
        for(int i=0;i<connections.size();i++)
        {
            vis[connections[i][0]]=true;
            vis[connections[i][1]]=true;
            int x=find(parent,connections[i][0]);
            int y=find(parent,connections[i][1]);
            
            if(x==y)
                continue;
            parent[x]=y;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
            if (parent[i] == i)
                ans++;
        
        return ans-1;
        
    }
};