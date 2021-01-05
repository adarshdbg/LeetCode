class Solution:
    def numSpecial(self, mat: List[List[int]]) -> int:
        x = [sum(i) for i in zip(*mat)]
        count = 0
        for row in mat:
            if sum(row) == 1 and x[row.index(1)] == 1:
                count+=1
        return count