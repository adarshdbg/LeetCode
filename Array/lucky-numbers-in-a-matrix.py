class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        row={min(x) for x in matrix}
        column={max(x) for x in zip(*matrix)}
        
        return list(row & column)