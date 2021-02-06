class Solution {
public:
    
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(dfs(board,word,n,m,i,j,0))
                        return true;
                }
            }
        }
        return false;
    }
    bool dfs(vector<vector<char>>&board,string &word,int n,int m,int i,int j,int p)
    {
        if(i<0 || j<0 || i==n || j==m || board[i][j]!=word[p])
            return false;
        
        if(board[i][j]==word[p])
        {
            if(p==word.size()-1)
                return true;
            else
            {
                char u=board[i][j];
                board[i][j]='*';
                bool ans=(dfs(board,word,n,m,i+1,j,p+1) || dfs(board,word,n,m,i-1,j,p+1) || dfs(board,word,n,m,i,j+1,p+1) || dfs(board,word,n,m,i,j-1,p+1));
                board[i][j]=u;
                return ans;
            }
        }
        return {};
        
    }
    
};