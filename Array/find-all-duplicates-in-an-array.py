class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        
        a=[]
        for i in nums:
            if nums[abs(i)-1]<0:
                a+=[abs(i)]
            else:
                nums[abs(i)-1]*=-1
            
        
        return a