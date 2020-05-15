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
    vector<int>a;
    vector<vector<int>> combine(int n, int k) {
        dfs(a,n,k,1);
        return v;
    }
    void dfs(vector<int>&a,int n,int k,int j)
    {
        if(a.size()==k)
        {
            v.push_back(a);
            return;
        }
        
        for(int i=j;i<=n;i++)
        {
            a.push_back(i);
            dfs(a,n,k,i+1);
            a.pop_back();
            
        }
    }
};