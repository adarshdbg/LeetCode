static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<vector<int>>v;
    vector<vector<int>>v_r;
    vector<int> degree;
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
 
        // v is original graph 
        // v_r is reversed graph (reversed means if v has edge u -> v then v_r will have v -> u)
        v.clear(); v.resize(n);
        v_r.clear(); v_r.resize(n);
 
        // degree represent out-degree of each vertex of graph
        degree.resize(n,0);
 
        // Creating graphs
        for(int i=0;i<n;i++)
        {   
            for(int j=0;j<graph[i].size();j++)
                v[i].push_back(graph[i][j]),degree[i]++,v_r[graph[i][j]].push_back(i);
        }
 
        // Every path should end on a vertex with out-degree 0
        // So we are pushing end of every path
        queue<int> q;
        for(int i=0;i<n;i++) if(degree[i] == 0) q.push(i);
 
        // and removing every edge connected to it 
        // then continue the same thing we will get all the nodes which are only reachable from out-degree = 0 vertex 
        while(!q.empty()){
            int top = q.front();
            q.pop();
            for(int i=0;i<v_r[top].size();i++){
                degree[v_r[top][i]]--;
                if(degree[v_r[top][i]] == 0) q.push(v_r[top][i]);
            }
        }
 
        vector<int> sol;
        for(int i=0;i<n;i++) if(degree[i] == 0) sol.push_back(i);
        return sol;
    }
};