class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                dp[i][j]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(text1[i]==text2[j])
                {
                    dp[i+1][j+1]=dp[i][j]+1;
                }
                else
                {
                    dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);   
                }
            }
        }
        return dp[n][m];
    }
};