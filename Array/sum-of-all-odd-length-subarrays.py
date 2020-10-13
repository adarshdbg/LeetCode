class Solution(object):
    def sumOddLengthSubarrays(self, arr):
        res,n=0,len(arr)
        for i,a in enumerate(arr):
            res += ((i+1)*(n-i) + 1) / 2 * a
            
        return res
        