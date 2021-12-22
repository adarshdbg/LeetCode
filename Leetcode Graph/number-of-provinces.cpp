static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    void dfs(vector<vector<int>>&v,int i)
    {
        v[i][i]=0;
        for(int j=0;j<v.size();j++)
        {
            if(v[j][j] && v[i][j])
                dfs(v,j);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        //vis[i] check which node is visited or not
        //vector<bool>vis(n,0);
        int ans=0;   //total no of provinces
        for(int i=0;i<n;i++)
        {
            if(isConnected[i][i])
            {
                //increase the count of provinces
                ans++;
                dfs(isConnected,i);
            }
        }
        return ans;
    }
};