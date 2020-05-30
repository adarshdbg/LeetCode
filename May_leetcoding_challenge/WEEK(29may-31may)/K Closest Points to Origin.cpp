static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    static inline bool cmp(const vector<int>&a,const vector<int>&b)
    {
        return pow(a[0],2)+pow(a[1],2) < pow(b[0],2)+pow(b[1],2);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        sort(points.begin(),points.end(),cmp);
        return {points.begin(),points.begin()+K};
    }
};