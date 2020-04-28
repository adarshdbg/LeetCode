class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int n=A.size();
        int m=A[0].size();
        vector<vector<int>> dp(n,vector<int>(m));
        
        for(int i=0;i<m;i++)
        {
           dp[0][i] =A[0][i];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int r1=max(0,j-1);
                int r2=min(m-1,j+1);
                dp[i][j]=min(dp[i-1][j],min(dp[i-1][r1],dp[i-1][r2])) + A[i][j];
            }
        }
        // for(int i=0;i<m;i++)
        // {
        //    min()
        // }
        return *min_element(dp[n-1].begin(), dp[n-1].end());
    }
};