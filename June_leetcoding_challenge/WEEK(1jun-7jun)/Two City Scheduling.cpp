static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
    
        sort(costs.begin(),costs.end(),[](vector<int>&a,vector<int>&b){
            return a[0]-a[1]<b[0]-b[1];
        });
        int res=0;
        for (auto i = 0; i < costs.size() / 2; ++i) {
            res += costs[i][0] + costs[i + costs.size() / 2][1];
        }
         return res;
    }
};