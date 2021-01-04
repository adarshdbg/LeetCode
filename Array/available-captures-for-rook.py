class Solution:
    def numRookCaptures(self, board: List[List[str]]) -> int:
        for i in range(len(board)):
            for j in range(len(board)):
                if board[i][j]=="R":
                    x,y=i,j
        ans=0
        for i,j in [[1,0],[-1,0],[0,1],[0,-1]]:
            x_0,y_0=x+i,y+j
            while 0<=x_0<8 and 0<=y_0<8:
                if board[x_0][y_0]=="p":
                    ans+=1
                    break
                elif board[x_0][y_0]=="B":
                    break
                x_0,y_0=x_0+i,y_0+j
            
        return ans
                    
                    