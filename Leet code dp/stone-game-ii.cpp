static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int stoneGameII(vector<int>& piles) {
         int n=piles.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
       
        //int sum[n];
        vector<int>sum(n,0);
        sum[n-1]=piles[n-1];
        for(int i=n-2;i>=0;i--)
        {
            sum[i] = sum[i+1]+piles[i];
        }
        dfs(dp,piles,sum,0,1);
        
        return dp[0][1];
    }
    int dfs(vector<vector<int>>&dp,vector<int>&p,vector<int>&sum,int i,int m)
    {
        if(i==p.size())
            return 0;
        if(2*m>=p.size()-i)
            return sum[i];
        if (dp[i][m]) 
            return dp[i][m];
        int mi=INT_MAX;
        for(int k=1;k<=2*m;k++)
        {
            mi=min(mi,dfs(dp,p,sum,i+k,max(m,k)));
        }
        dp[i][m]=sum[i]-mi;
        return dp[i][m];
            
    }
};