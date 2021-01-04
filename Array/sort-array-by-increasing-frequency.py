class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        ans=collections.Counter(nums)
        
        return sorted(nums,key=lambda x:(ans[x],-x))