static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        if(n==1)
            return 0;
        int dp[n+1],count=0;
        memset(dp,0,n+1);
        for(int i=0;i<s.size();i++)
        {
            
                if(s[i]=='a')
                    dp[i+1]=min(dp[i]+1,count);
                else
                    dp[i+1]=dp[i],count++;
            
        }
        return dp[n];
    }
};