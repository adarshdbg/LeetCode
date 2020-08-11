static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int no_of_zero=1;
    int ans=0,n,m,x,y;
    int uniquePathsIII(vector<vector<int>>& grid) {
        
         n=grid.size();
         m=grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                no_of_zero++;
                
                if(grid[i][j]==1)
                    x=i,y=j;
            }
        }
        
        dfs(grid,x,y);
        return ans;
    }
    void dfs(vector<vector<int>>&grid,int x,int y)
    {
        if(x<0 || y<0 || x==n || y==m || grid[x][y]<0)
            return;
        
        if(grid[x][y]==2)
        {
            if(no_of_zero==0)
                ans++;
            return;
        }
        no_of_zero--;
        grid[x][y]=-2;
        dfs(grid,x+1,y);
        dfs(grid,x-1,y);
        dfs(grid,x,y+1);
        dfs(grid,x,y-1);
        
        grid[x][y]=0;
        no_of_zero++;
        
        
    }
};