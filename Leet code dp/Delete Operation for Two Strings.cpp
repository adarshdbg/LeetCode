static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        
        int ans=0;
        vector<vector<int>>dp(n,vector<int>(m,0));
        //memset(dp,0,n*m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=word1[i]==word2[j]?1:(i==0 && j==0?0:(i==0)?dp[i][j-1]:dp[i-1][j]);
                }
                else
                    dp[i][j]=word1[i]==word2[j]?dp[i-1][j-1]+1:max(dp[i][j-1],dp[i-1][j]);
                
            }
        }
        
        
        return m+n-2*(dp[n-1][m-1]);
    }
};