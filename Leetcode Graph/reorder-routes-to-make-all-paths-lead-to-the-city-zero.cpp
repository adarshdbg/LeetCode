static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        unordered_map<int,vector<int>>m;
        unordered_map<int,vector<int>>m1;
        for(auto &i:connections)
            m[i[0]].push_back(i[1]),m1[i[1]].push_back(i[0]);
        
        int ans=0;
        queue<int>q;
        q.push(0);
        vector<bool>vis(n);
        while(!q.empty())
        {
            int k=q.front();
            vis[k]=true;
            q.pop();
            
            for(auto &i:m[k])
            {
                if(!vis[i])
                    ans++,q.push(i);
            }
            for(auto &i:m1[k])
            {
                if(!vis[i])
                    q.push(i);
            }
        }
        
        return ans;
    }
};