class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
         int sum=0;
        int n = s1.length();
        int m = s2.length();
        for(int i=0;i<n;i++){
            sum+=int(s1[i]);
        }
        for(int i=0;i<m;i++){
            sum+=int(s2[i]);
        }
        int dp[n+10][m+10];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1])
                    dp[i][j] = dp[i-1][j-1]+int(s1[i-1])+int(s2[j-1]);
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return sum-dp[n][m];
    
    }
};