class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        new_grid = [[0] * len(grid[0]) for i in range(len(grid))]
        num_rows = len(grid)
        num_cols = len(grid[0])
        for row in range(num_rows):
            for col in range(num_cols):
                new_col = (col + k) % num_cols
                wrap_around_count = (col + k) // num_cols
                new_row = (row + wrap_around_count) % num_rows
                new_grid[new_row][new_col] = grid[row][col]
        return new_grid

      
        """n=len(ans)
        m=len(ans[0])
        print(grid,end=" ")
        for i in range(n):
            for j in range(m):
                ans[(i + ((j+k) // m ))%n][(j+k)%m]=grid[i][j]
                print(grid[i][j])
            
        
        return ans"""
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        