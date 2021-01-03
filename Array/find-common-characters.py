class Solution:
    def commonChars(self, A: List[str]) -> List[str]:
        res = collections.Counter(A[0])
        #print(res)
        for a in A:
            res &= collections.Counter(a)
            #print(res)
        return list(res.elements())