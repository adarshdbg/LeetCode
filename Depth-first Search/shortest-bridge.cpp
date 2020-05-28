static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    queue<pair<int,int>>q;
    int shortestBridge(vector<vector<int>>& A) {
        int n=A.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(A[i][j]==1)
                {
                   
                    dfs(A,i,j);
                    ans=min(ans,bfs(A,n));
                    //while(!q.empty()) q.pop();
                }
                
            }
        }
        return ans;
    }
    int  bfs(vector<vector<int>>&a,int n)
    {
        int ans=0;
        while(!q.empty())
        {
            int t=q.size();
            for(int i=0;i<t;i++)
            {
                auto s=q.front();
                q.pop();
                int j=s.first;
                int k=s.second;
                
                if(j>0 && a[j-1][k]==1)
                    return ans;
                else if(j>0 && a[j-1][k]==0)
                {
                    a[j-1][k]=2;
                    q.push({j-1,k});
                }
                if(j<n-1 && a[j+1][k]==1)
                    return ans;
                else if(j<n-1 && a[j+1][k]==0)
                {
                    a[j+1][k]=2;
                    q.push({j+1,k});
                }
                if(k>0 && a[j][k-1]==1)
                    return ans;
                else if(k>0 && a[j][k-1]==0)
                {
                    a[j][k-1]=2;
                    q.push({j,k-1});
                }
                if(k<n-1 && a[j][k+1]==1)
                    return ans;
                else if(k<n-1 && a[j][k+1]==0)
                {
                    a[j][k+1]=2;
                    q.push({j,k+1});
                }
            }
          
            ans++;
        }
        return INT_MAX;
    }
    void dfs(vector<vector<int>>&a,int i,int j)
    {
        if(i<0 || j<0 || i>=a.size() || j>=a.size() || a[i][j]==0 || a[i][j]==2)
        {
             return;
        }
        q.push({i,j});
        a[i][j]=2;
        dfs(a,i+1,j);
        dfs(a,i-1,j);
        dfs(a,i,j+1);
        dfs(a,i,j-1);
    }
};