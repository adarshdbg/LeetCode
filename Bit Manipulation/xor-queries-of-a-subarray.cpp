static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>v;
        v.push_back(arr[0]);
        for(int i=1;i<arr.size();i++)
        {
            v.push_back(v.back()^arr[i]);
        }
        vector<int>ans;
        for(auto i:queries)
        {
            if(i[0]==0)
               ans.push_back(v[i[1]]); 
            else
            ans.push_back(v[i[1]]^v[i[0]-1]);
        }
        return ans;
    }
};