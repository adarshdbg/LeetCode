static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int p=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])
                {
                    p=max(p,dfs(grid,i,j,n,m));
                }
            }
        }
        return p;
    }
    int dfs(vector<vector<int>>&a,int i,int j,int n,int m)
    {
        if(i>=0 && j>=0 && i<n && j<m && a[i][j])
        {
            a[i][j]=0;
            return dfs(a,i+1,j,n,m)+dfs(a,i-1,j,n,m)+dfs(a,i,j+1,n,m)+dfs(a,i,j-1,n,m)+1;
        }
        else
            return 0;
        return 0;
    }
};