class Solution:
    def findBall(self, grid: List[List[int]]) -> List[int]:
        
        m,n=len(grid),len(grid[0])
        
        def ans(i):
            for j in range(m):
                i2=i+grid[j][i]
                
                if i2==-1 or i2==n or grid[j][i2]!=grid[j][i]:
                    return -1
                i=i2
            return i
        return map(ans,range(n))
                
                
        
        
        