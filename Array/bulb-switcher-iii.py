class Solution:
    def numTimesAllBlue(self, light: List[int]) -> int:
        ans=right=0
        for i,a in enumerate(light,1):
            right=max(right,a)
            ans+=right==i
        
        return ans