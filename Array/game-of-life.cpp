class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int n=board.size(),m=board[0].size();
        vector<pair<int,int>>dir={{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int p=0;
                for(int k=0;k<8;k++)
                {
                    if((i+dir[k].first>=0 && i+dir[k].first<n) && (j+dir[k].second>=0 && j+dir[k].second<m))
                    {
                        if(board[i+dir[k].first][j+dir[k].second]>=1)
                            p++;
                    }
                }
                if(board[i][j]==1)
                {
                    if(p<2)
                        board[i][j]=3;
                    if(p==2 || p==3)
                        continue;
                    if(p>3)
                        board[i][j]=3;
                }
                else
                {
                    if(p==3)
                        board[i][j]=-1;
                }
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //        cout<<board[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==3)
                    board[i][j]=0;
                else if(board[i][j]==-1)
                    board[i][j]=1;
            }
        }
    }
};