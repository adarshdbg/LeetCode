static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int regionsBySlashes(vector<string>& grid) {
        int n=grid.size();
        vector<vector<int>>v(n*3,vector<int>(n*3,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='/')
                {
                    v[i*3][j*3 +2]=v[i*3 +1][j*3 +1]=v[i*3 +2][j*3]=1;
                }
                if(grid[i][j]=='\\')
                {
                    v[i*3][j*3]=v[i*3 +1][j*3 +1]=v[i*3 +2][j*3 +2]=1;
                }
            }
        }
        int ans=0;
        int m=v.size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!v[i][j])
                {
                    dfs(v,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
    void dfs(vector<vector<int>>&v,int i,int j){
        int n=v.size();
        if(i>=0 && i<n && j>=0 && j<n && !v[i][j])
        {
            v[i][j]=1;
            dfs(v,i+1,j);
            dfs(v,i-1,j);
            dfs(v,i,j-1);
            dfs(v,i,j+1);
        }
    }
};