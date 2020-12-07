class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        sum=0
        
        for i in range(len(mat)):
            for j in range(len(mat[i])):
                if(i==j or i+j==(len(mat)-1)):
                    sum+=mat[i][j]
        return sum
     
         
        