static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<vector<int>>relation={{1},{0,2},{0,1,3,4},{2,4},{0}};
    vector<vector<int>>dp;
    int mod=1e9+7;
    int dfs(int n,int v)
    {
        if(n==1)
            return 1;
        
        if(dp[n][v]!=0)
            return dp[n][v];
        
        for(auto i:relation[v])
            dp[n][v]+=dfs(n-1,i),dp[n][v]%=mod;
        
        return dp[n][v];
        
    }
    int countVowelPermutation(int n) {
        dp.resize(n+1,vector<int>(5,0));
        int ans=0;
        
        for(int i=0;i<5;i++)
        {
            ans+=dfs(n,i);
            ans%=mod;
        }
        
        return ans;
        
    }
};