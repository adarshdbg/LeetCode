static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int twoEggDrop(int k) {
         int n=2;
    
       vector<vector<int>>dp(n+1,vector<int>(k+1,0));

        for(int i=1;i<=k;i++){
            dp[1][i]=i;
        }

        for(int i=1;i<=n;i++){
            dp[i][1]=1;
        }

        for(int i=2;i<=n;i++){

            for(int j=2;j<=k;j++){

                int minn=INT_MAX;

                for(int m=0;m<j;m++){
                    minn=min(minn,max(dp[i-1][m],dp[i][j-m-1]));
                }

                dp[i][j]=1+minn;

            }

        }

        return dp[n][k];
    
    }
};