class Solution:
    def matrixReshape(self, nums: List[List[int]], r: int, c: int) -> List[List[int]]:
        if (len(nums)*len(nums[0]))%(r*c)!=0:
            return nums
        
        a=[]
        
        for i in nums:
            for j in i:
                a.append(j)
        
        ans=[[None]]
        for i in range(0,len(a),c):
            ans.append(a[i:i+c])
          
        del ans[0]
        return ans
            
        