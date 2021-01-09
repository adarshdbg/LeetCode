class Solution:
    def pancakeSort(self, arr: List[int]) -> List[int]:
        d=defaultdict(int)
        count=0
        for i in range(len(arr)):
            d[arr[i]]=i
            
        ans=[]
        
        x=len(arr)
        y=x-1
        while x>1:
            a=d[x]
            if a==y:
                x-=1
                y-=1
            else:
                ans.append(a+1)
                arr[:a+1]=reversed(arr[:a+1])
                ans.append(x)
                arr[:x]=reversed(arr[:x])
                """for i in arr:
                    print(i,end=" ")"""
               
                x-=1
                y-=1     
            for i in range(len(arr)):
                    d[arr[i]]=i
                
        return ans
                
            