static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int dp[70][70][70];
    int cherryPickup(vector<vector<int>>& grid) {
        
        memset(dp,-1,sizeof(dp));
        int n=grid.size(),m=grid[0].size();
        
        return dfs(grid,n,m,0,0,m-1);
    }
    int dfs(vector<vector<int>>&a,int n,int m,int r,int c1,int c2)
    {
        if(r==n)
            return 0;
        
        if(dp[r][c1][c2]!=-1)
            return dp[r][c1][c2];
        
        int ans=0;
        for(int i=-1;i<2;i++)
        {
            for(int j=-1;j<2;j++)
            {
                if(r<n && c1+i>=0 && c1+i<m && c2+j>=0 && c2+j<m)
                {
                    ans=max(ans,dfs(a,n,m,r+1,c1+i,c2+j));
                }
            }
        }
        
        int cherry=c1==c2?a[r][c1]:a[r][c1]+a[r][c2];
        
        return dp[r][c1][c2]=ans+cherry;
    }
};