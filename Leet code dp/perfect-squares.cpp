class Solution {
public:
    int numSquares(int n) {
        if(n<2)
            return n;
        vector<int>dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            int p=INT_MAX;
            for(int j=1;j*j <= i;j++)
            {
                p=min(p,dp[i - j*j] + 1);
            }
            dp[i]=p;
        }
        return dp[n];
    }
};