class Solution:
    def specialArray(self, nums: List[int]) -> int:
        arr=[0]*1001
        for i in nums:
            arr[i]+=1
            
        for i in range(999,-1,-1):
            arr[i]+=arr[i+1]
            if arr[i]==i:
                return i
            
        return -1