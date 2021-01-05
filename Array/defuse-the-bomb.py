class Solution:
    def decrypt(self, code: List[int], k: int) -> List[int]:
        ans=code
        
        code=code*2
        
        if k==0:
            return [0]*len(ans)
        
        #print(code)
        for i in range(len(ans)):
            if k>0:
                ans[i]=sum(code[i+1:i+k+1])
            elif k<0:
                ans[i]=sum(code[i+len(ans)+k:i+len(ans)])
        
        return ans