class Solution:
    def processQueries(self, queries: List[int], m: int) -> List[int]:
        ans=[]
        arr=list(range(1,m+1))
        for i in range(len(queries)):
            p=queries[i]
            q=arr.index(p)
            ans.append(q)
            x=arr[q]
            arr.pop(q)
            arr.insert(0,x)
            
        return ans