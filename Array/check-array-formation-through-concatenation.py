class Solution:
    def canFormArray(self, arr: List[int], pieces: List[List[int]]) -> bool:
        
        mapping={x[0]:x for x in pieces}
        
        ans=[]
        
        for i in arr:
            ans+=mapping.get(i,[])
        
        return ans==arr