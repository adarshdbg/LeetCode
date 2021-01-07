class Solution:
    def slowestKey(self, a: List[int], keysPressed: str) -> str:
            
            ans=a[0]
            ans1=keysPressed[0]
            for i in range(1,len(a)):
                #ans=max(ans,a[i]-a[i-1])
                if ans==a[i]-a[i-1]:
                    ans1=max(ans1,keysPressed[i])
                else:
                    ans=max(ans,a[i]-a[i-1])
                    if ans==a[i]-a[i-1]:
                        ans1=keysPressed[i]
                
            return ans1
                    
                