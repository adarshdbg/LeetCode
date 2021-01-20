class Solution:
    def numSubmat(self, mat: List[List[int]]) -> int:
        dp=mat.copy()
        for i in range(0,len(mat)):
            for j in range(1,len(mat[0])):
                if mat[i][j]!=0:
                    dp[i][j]=dp[i][j-1]+mat[i][j]
        ans=0 
        for i in range(0,len(mat[0])):
            for j in range(0,len(mat)):
                no_of_submatrices=dp[j][i]
                for k in range(j,-1,-1):
                    if no_of_submatrices==0:
                        break
                    no_of_submatrices=min(no_of_submatrices,dp[k][i])
                    ans=ans+no_of_submatrices
        
        return ans
                    
                

        
        