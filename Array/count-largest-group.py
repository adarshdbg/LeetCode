class Solution:
    def countLargestGroup(self, n: int) -> int:
        a=[0]*37
        
        for i in range(1,n+1):
            s=str(i)
            lis=list(map(int,s))
            a[sum(lis)]+=1
            
            
        return sum(b==max(a) for b in a)
        