static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        unordered_map<int,vector<int>>rev_g;
        int n=graph.size();
        vector<int>out(n,0);
        for(int i=0;i<graph.size();i++)
        {
            for(auto &j:graph[i])
                rev_g[j].push_back(i),out[i]++;
        }
        
        queue<int>q;
        
        for(int i=0;i<n;i++)
            if(!out[i])
                q.push(i);
        
        while(!q.empty())
        {
            int p=q.front();
            q.pop();
            for(auto &j:rev_g[p])
            {
                out[j]--;
                if(out[j]==0)
                    q.push(j);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
            if(!out[i])
                ans.push_back(i);
        
        return ans;
    }
};