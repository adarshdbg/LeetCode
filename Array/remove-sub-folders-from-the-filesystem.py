class Solution:
    def removeSubfolders(self, folder: List[str]) -> List[str]:
        d=defaultdict(int)
        
        for i in folder:
            s=""
            for j in range(len(i)):
                s+=i[j]
                #print((j,i,len(i)),end=" ")
                if d[s]==1 and j<len(i)-1 and i[j+1]=='/':
                    break
                if j==len(i)-1:
                    d[i]=1
        
        for i in reversed(folder):
            s=""
            for j in range(len(i)):
                s+=i[j]
                if d[s]==1 and j<len(i)-1 and i[j+1]=='/':
                    d[i]=0
                    break
                if j==len(i)-1:
                    d[i]=1
        
        ans=[]
        
        for i in d:
            if d[i]==1:
                ans.append(i)
        return ans
            
        
        
                
                
        