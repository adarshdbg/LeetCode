static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int sum=0;
        vector<vector<int>> dp;
        dp=triangle;
        for(int i=1;i<triangle.size();i++)
        {
            for(int j=0;j<triangle[i].size();j++)
            {
                if(j==0)
                  dp[i][j]+=dp[i-1][j];
                else if(j==triangle[i].size() - 1)
                dp[i][j]+=(dp[i-1][j-1]);
                else
                dp[i][j]+=min(dp[i-1][j-1],dp[i-1][j]);
            }
        }
        for(int i=0;i<triangle.size();i++)
        {
            for(int j=0;j<triangle[i].size();j++)
            {
               cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        
        return *min_element(dp[n-1].begin(),dp[n-1].end());
    }
    
};