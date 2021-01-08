class Solution:
    def diagonalSort(self, mat: List[List[int]]) -> List[List[int]]:
        n,m=len(mat),len(mat[0])
        
        def sort_digonal(i,j):
            ans=[]
            while i<n and j<m:
                ans.append(mat[i][j])
                i+=1
                j+=1
                
            ans.sort()
            i-=1
            j-=1
            while i>=0 and j>=0:
                mat[i][j]=ans.pop()
                i-=1
                j-=1
        
            
        for i in range(n):
                sort_digonal(i,0)
                
        for i in range(1,m):
                sort_digonal(0,i)
        return mat
            
        
        
            
            
            
        