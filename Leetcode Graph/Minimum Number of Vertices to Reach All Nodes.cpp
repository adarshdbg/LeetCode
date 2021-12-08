static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>v(n);
        
        vector<int>ans;
        for(auto &i:edges)
        {
            v[i[1]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
                ans.push_back(i);
        }
        
        return ans;
    }
};