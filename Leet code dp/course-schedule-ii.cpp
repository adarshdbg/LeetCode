static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
       
        vector<vector<int>>v(numCourses);
        vector<int>degree(numCourses,0);
        vector<int>s;
        set<int>si;
        for(auto i:prerequisites)
        {
            v[i[1]].push_back(i[0]);
            degree[i[0]]++;
        }
        for (int i = 0; i < numCourses; i++) {
            int j = 0;
            for (; j < numCourses; j++) {
                if (!degree[j]) {
                    s.push_back(j);
                    break;
                }
            }
            if (j == numCourses) {
                return {};
            }
            degree[j]--;
            for (int v1 : v[j]) {
                degree[v1]--;
            }
        }        
        return s;
        
        
            
    }
};