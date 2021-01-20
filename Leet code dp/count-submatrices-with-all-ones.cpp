class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        
        vector<vector<int>>dp=mat;
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=1;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                    dp[i][j]=0;
                
                else
                    dp[i][j]=dp[i][j-1]+mat[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<mat[0].size();i++)
        {
            for(int j=0;j<mat.size();j++)
            {
                int no_of_submatrices=dp[j][i];
                for(int k=j;k>=0;k--)
                {
                    if(dp[k][i]==0)
                        break;
                    no_of_submatrices=min(no_of_submatrices,dp[k][i]);
                    
                    ans+=no_of_submatrices;
                }
            }
        }
        
        return ans;
    }
};