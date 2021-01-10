class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        cum=[0]
        cum+=nums
        
        for i in range(1,len(nums)+1):
            cum[i]+=cum[i-1]
        
        ans=nums
        n=len(nums)
        ans1=0
        for i in range(2,n+1):
            for j in range(1,n-i+2):
                #ans1+=1
                #print((len(nums),len(nums)-i+2),end=" ")
                ans.append(cum[j+i-1]-cum[j-1])
                
        ans.sort()
        ans1=0
        #print(len(ans))
        for i in range(left-1,right):
            ans1+=ans[i]
            ans1=ans1%(1e9 + 7)
            
        return int(ans1)
                
        
        
                
            