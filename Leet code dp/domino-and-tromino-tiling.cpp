static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int m=1e9 + 7;
    int numTilings(int n) {

        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        
        int dp[n+1];
        
        dp[0]=1,dp[1]=1,dp[2]=2;
        for(int i=3;i<=n;i++)
        {
            dp[i]=((2*(dp[i-1]%m))%m + dp[i-3]%m)%m;
        }
        return dp[n];
    }
};