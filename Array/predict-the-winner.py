class Solution:
    def PredictTheWinner(self, nums: List[int]) -> bool:
        if len(nums)==1:
            return True
        dp1=[[None]*len(nums) for i in range(len(nums))]
        #print(dp)
        def dp(i,j):
            if i==j:
                return nums[i]
            if dp1[i][j]!=None:
                return dp1[i][j]
            a=nums[i]-dp(i+1,j)
            b=nums[j]-dp(i,j-1)
            dp1[i][j]=max(a,b)
            return dp1[i][j]
            
            
        dp(0,len(nums)-1)
        
        return dp1[0][len(nums)-1]>=0