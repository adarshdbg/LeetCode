class Solution {
public:
    int largest1BorderedSquare(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int dp[n+1][m+1][2];
        int max1=0;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                dp[i][j][0]=0;
                dp[i][j][1]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    dp[i+1][j+1][0]=0;
                    dp[i+1][j+1][1]=0;
                }
                else
                {
                    dp[i+1][j+1][0]=dp[i][j+1][0] + 1;
                    dp[i+1][j+1][1]=dp[i+1][j][1] + 1;
                
                int l=min(dp[i+1][j+1][0],dp[i+1][j+1][1]);
                for(int k=l;k>max1;k--)
                {
                    int p=min(dp[i+1][j + 1 - k + 1][0],dp[i + 1 - k + 1][j+1][1]);
                    if (p>= k)
                    {
                            max1 = max(max1, k);
                    }
                }
                }
                //cout<<dp[i+1][j+1][0]<<" "<<dp[i+1][j+1][1]<<endl;
            }
        }
        return max1*max1;
    }
};