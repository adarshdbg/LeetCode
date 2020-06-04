static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    double largestSumOfAverages(vector<int>& A, int K) {
        int n=A.size();
       double dp[n][K];
        memset(dp,0.0,sizeof(dp));
        int sum[n];
        memset(sum,0,sizeof(sum));
        sum[0]=A[0];
        
        for(int i=1;i<n;i++)
        {
            sum[i]+=sum[i-1]+A[i];
        }
        if(K>=n)
            return 1.0*sum[n-1];
        if(K<=1)
            return 1.0*sum[n-1]/n;
        
        for(int i=0;i<n;i++)
            dp[i][0]=(1.0*sum[i])/(i+1);
        
        for(int k=1;k<K;k++)
        {
            for(int j=k;j<n;j++)
            {
                for(int i=j-1;i>=k-1;i--)
                {
                    dp[j][k]=max(dp[j][k],dp[i][k-1]+ (1.0*(sum[j]-sum[i]))/(j-i));
                }
            }
        }
        return dp[n-1][K-1];
        
    }
};