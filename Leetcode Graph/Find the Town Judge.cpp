static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<int,int>>vis(n+1);
        
        for(int i=0;i<trust.size();i++)
        {
            vis[trust[i][1]].first++;
            vis[trust[i][0]].second++;
        }
        
        for(int i=1;i<=n;i++)
            if(vis[i].first==n-1 && vis[i].second==0)
                return i;   
        
        return -1;
    }
};