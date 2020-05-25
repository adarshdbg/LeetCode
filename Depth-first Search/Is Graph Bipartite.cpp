static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
      
      // color values: 
      // 0 (un-colored), 1 (A set), -1 (B set)
      vector<int> color(n, 0);
      
      for (int i = 0; i < n; ++i) 
      {
        if (color[i] != 0) continue;
        
        // BFS to color neighbors in opposite colors
        queue<int> q({i});
        color[i] = 1;
        
        while (!q.empty()) {
          int cur = q.front();
          q.pop();
          for (int j : graph[cur]) {
            if (color[j] == 0) {
              color[j] = -color[cur]; // use opposite color
              q.push(j);
            }
            else if (color[j] == color[cur])
              return false; // same color used in neighbors
          }
        }
      }
      return true;
    }
};