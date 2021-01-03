class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        
        return sum(x!=y for x,y in zip(heights,sorted(heights)))