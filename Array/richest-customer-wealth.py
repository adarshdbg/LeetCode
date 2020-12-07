class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        ans=0
        for i in range(len(accounts)):
            ans1=0
            for j in range(len(accounts[i])):
                ans1+=accounts[i][j]
            ans=max(ans,ans1)
        
        return ans
        