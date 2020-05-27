static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    //int t=0;
    int numEnclaves(vector<vector<int>>& A) {
        int n=A.size();
        int m=A[0].size();
        int p=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(A[i][j])
                {
                   int t=0;
                    
                   p+=dfs(A,i,j,n,m,t)?t:0;
                }
            }
        }
        return p;
    }
    bool dfs(vector<vector<int>>&a,int i,int j,int n,int m,int& t)
    {
        if(i<0 || j<0 || i>=n || j>=m)
        {
            return false;
        }
        
        if(a[i][j]==0)
        {
            
            return true;
        }
        a[i][j]=0;
        t=t+1;
        bool p=dfs(a,i+1,j,n,m,t);
        bool q=dfs(a,i-1,j,n,m,t);
        bool r=dfs(a,i,j+1,n,m,t);
        bool s=dfs(a,i,j-1,n,m,t);
        return p && q && r && s; 
    }
};