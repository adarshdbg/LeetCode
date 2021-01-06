class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        ans=collections.Counter(arr)
        k=len(arr)//4
        print(k)
        for i in ans:
            if ans[i]>=(len(arr)/4):
                k=i
                
                
        return  k