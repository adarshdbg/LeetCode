class Solution:
    def getStrongest(self, arr: List[int], k: int) -> List[int]:
        arr.sort()
        m=arr[(len(arr)-1)//2]
        i=0
        j=len(arr)-1
        
        while k:
            k-=1
            if m-arr[i] > arr[j]-m:
                i+=1
            else:
                j-=1
        
        #print((i,j),end=",")
        #del arr[i+1:j-1]
        
        return arr[:i] + arr[j + 1:]