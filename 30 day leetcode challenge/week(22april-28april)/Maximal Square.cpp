static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        if(n==0)
            return 0;
        int m=matrix[0].size();
        
        
        int dp[n][m];
        memset(dp,0,sizeof(dp));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=matrix[i][j] - '0';
                    ans=max(ans,dp[i][j]);
                }
                else if(matrix[i][j]=='1')
                {
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1])) + 1;
                    ans=max(ans,dp[i][j]);
                }
            }
        }
        
        
        return ans*ans;
        
    }
};