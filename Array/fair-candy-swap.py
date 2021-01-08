class Solution:
    def fairCandySwap(self, A: List[int], B: List[int]) -> List[int]:
        freq=collections.Counter(A)
        
        a=(sum(A)-sum(B))//2
        
        for i in B:
            if freq[a+i]>0 :
                return [a+i,i]

        
        return [0,0]