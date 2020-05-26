static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int n=M.size();
        int p=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if( M[i][j])
                {
                    M[i][j]=0;
                    dfs(M,j);
                    p++;
                }  
            }
        }
        return p;
    }
    void dfs(vector<vector<int>>&a,int j)
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[j][i])
            {
                a[j][i]=0;
                dfs(a,i);
            }
        }
    }
};