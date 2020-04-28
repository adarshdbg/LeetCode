class Solution {
public:
    int longestArithSeqLength(vector<int>& a) {
        int n=a.size();
        int count=2;
         if(n==2)
             return 2;
        else
        {
            vector<unordered_map<int,int>> dp(n);
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<i;j++)
                {
                    int d=a[i]-a[j];
                    if(dp[i].find(d)==dp[i].end())
                        dp[i][d]=1;
                    if(dp[j].find(d)==dp[j].end())
                        dp[j][d]=1;
                    if (dp[j][d] + 1 > dp[i][d])
                    dp[i][d] = dp[j][d] + 1;
                    
                    count=max(count,dp[i][d]);
                }
            }
            return count;
        }
    }
};