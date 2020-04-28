static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& A, int K) {
        int n=A.size();
        vector<int>dp(n+1,0);
        if(n==1)
            return A[0];
        
       
        for(int i=0;i<A.size();i++)
        {
            int p=INT_MIN;
            int q=INT_MIN;
            for(int j=1;j<=K && i-j+1>=0;j++)
            {
               p=max(p,A[i-j+1]);
               q=max(dp[i-j+1] + j*p,q); 
                dp[i+1]=q;
            }
            
            
        }
        for(int i=0;i<=n;i++)
        {
            cout<<dp[i]<<" ";
        }
        return dp[n];
    }
};