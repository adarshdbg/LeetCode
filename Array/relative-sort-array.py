class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        n=max(arr1)
        freq=collections.Counter(arr1)
        j=0;
        
        for i in arr2:
            while freq[i] > 0:
                freq[i]-=1
                arr1[j]=i
                j+=1
            
            
        for i in range(n+1):
            while freq[i] > 0:
                freq[i]-=1
                arr1[j]=i
                j+=1
                
        return arr1