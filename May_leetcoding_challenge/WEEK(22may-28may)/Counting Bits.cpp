static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> countBits(int num) {
        
        vector<int>dp(num+1);
        dp[0]=0;
        for(int i=1;i<=num;i++)
        {
            int p=log2(i);
            int x=pow(2,p);
            if(x==i)
                dp[i]=1;
            else
            dp[i]=dp[x]+dp[i-x];
        }
        return dp;
    }
};