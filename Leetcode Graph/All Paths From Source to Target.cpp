static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    
    void dfs(vector<vector<int>>&ans,unordered_map<int,vector<int>>&m,vector<int>v,int i,int &n)
    {
        v.push_back(i);
        if(i==n-1)
        {
            ans.push_back(v);
            return;
        }
            
        for(auto &j:m[i])
        {
            dfs(ans,m,v,j,n);
        }
        return;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        
        unordered_map<int,vector<int>>m;
        
        for(int i=0;i<graph.size();i++)
        {
            for(int j=0;j<graph[i].size();j++)
            {
                m[i].push_back(graph[i][j]);
            }
        }
        vector<int>v;
        
//         stack<int>s;
//         s.push(0);
//         vector<int>v;
//        // v.push_back(0);
//         while(!s.empty())
//         {
//             int i=s.top();
//             s.pop();
//             v.push_back(i);
//             if(i==graph.size()-1)
//                 ans.push_back(v),v.pop_back();
            
//             for(auto &j:m[i])
//             {
//                // v.push_back(j);
//                 s.push(j);
//             }
            
//         }
        int n=graph.size();
        dfs(ans,m,v,0,n);
        
        return ans;
    }
};