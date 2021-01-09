class Solution:
    def numOfSubarrays(self, arr: List[int], k: int, threshold: int) -> int:
        arr.insert(0,0)
        for i in range(1,len(arr)):
            arr[i]+=arr[i-1]
        ans=0
        
        for i in range(k,len(arr)):
            if (arr[i]-arr[i-k])/k >=threshold:
                ans+=1
        return ans
            