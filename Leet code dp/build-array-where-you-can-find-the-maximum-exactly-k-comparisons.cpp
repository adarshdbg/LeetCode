static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    long long v[51][101][51];
    const int MOD=1e9 + 7;
    int numOfArrays(int n, int m, int k) {
        
        memset(v,0,sizeof(v));
        
        for(int i=1;i<=m;i++)
        {
            v[1][i][1]=1;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                for(int h=1;h<=k;h++)
                {
                    long long a=0;
                    a=(a + j*v[i-1][j][h])%MOD;
                    
                    for(int l=1;l<j;l++)
                    {
                        a=(a+ v[i-1][l][h-1])%MOD;
                    }
                    
                    v[i][j][h]=(a+v[i][j][h])%MOD;
                }
            }
        }
        
        long long ans = 0;
        for (int j = 1; j <= m; j++) {
            ans = (ans + v[n][j][k]) % MOD;
        }
        
        return int(ans);
    }
};