class Solution:
    def oddCells(self, n: int, m: int, indices: List[List[int]]) -> int:
        odd_row=[False]*n
        odd_col=[False]*m
        
        for i,j in indices:
            odd_row[i]^=True
            odd_col[j]^=True
            
        return m*sum(odd_row) + n*sum(odd_col) - 2*(sum(odd_row))*(sum(odd_col))
        