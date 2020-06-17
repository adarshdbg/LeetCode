static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    double dp[200][200];
    double soupServings(int N) {
        
        return N>5000?1.0:ans((N+24)/25,(N+24)/25);
    }
    double ans(int a,int b)
    {
        if(a<=0 && b<=0)
            return 0.5;
        
        if(a<=0)
            return 1.0;
        if(b<=0)
            return 0.0;
        if (dp[a][b] > 0) return dp[a][b];
        dp[a][b]=0.25*(ans(a-4,b)+ans(a-3,b-1)+ans(a-2,b-2)+ans(a-1,b-3));
        return dp[a][b];
    }
    
};