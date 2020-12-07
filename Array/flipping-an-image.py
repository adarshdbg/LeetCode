class Solution:
    def flipAndInvertImage(self, A: List[List[int]]) -> List[List[int]]:
        for i in range(len(A)):
            for j in range(len(A[i])//2):
                A[i][j],A[i][len(A[i])-j-1]=A[i][len(A[i])-j-1],A[i][j]
                
            for j in range(len(A[i])):
                A[i][j]=(A[i][j]+1)%2
            
        return A
            
        
                
        
        