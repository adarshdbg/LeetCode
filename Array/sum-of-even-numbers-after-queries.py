class Solution:
    def sumEvenAfterQueries(self, A: List[int], queries: List[List[int]]) -> List[int]:
        sum1=sum(i for i in A if i%2==0)
        #print(sum1)
        ans=[]
        
        for i in queries:
            A[i[1]]+=i[0]
            if i[0]%2==0:
                if (A[i[1]]-i[0])%2==1:
                    ans.append(sum1)
                else:
                    sum1+=i[0]
                    ans.append(sum1)
            else:
                if (A[i[1]]-i[0])%2==1:
                    #sum1-=(A[i[1]]-i[0])
                    sum1+=A[i[1]]
                    ans.append(sum1)
                    #print(sum1,end=" ")
                else:
                    sum1-=(A[i[1]]-i[0])
                    ans.append(sum1)
            
        
        return ans
                
                
                