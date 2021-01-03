class Solution:
    def minCostToMoveChips(self, position: List[int]) -> int:
        ans=collections.Counter([x%2 for x in position])
        return min(ans[0],ans[1])
        