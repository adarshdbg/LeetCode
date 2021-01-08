class Solution:
    def queensAttacktheKing(self, queens: List[List[int]], king: List[int]) -> List[List[int]]:
        ma=defaultdict(int)
        
        for i in queens:
            ma[(i[0],i[1])]=1
            
        
        ans=[]
        for i in [(1,1),(1,-1),(-1,1),(-1,-1),(0,1),(0,-1),(1,0),(-1,0)]:
            x=king[0]
            y=king[1]
            while 0<=x<8 and 0<=y<8:
                x=x+i[0]
                y=y+i[1]
                #print(ma[(x,y)])
                if ma[(x,y)]==1:
                    ans.append([x,y])
                    break
                
        return ans