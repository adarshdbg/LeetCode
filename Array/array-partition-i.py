class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort()
        sum1=0
        
        for i in range(0,len(nums),2):
            sum1+=nums[i]
            
        return sum1
        