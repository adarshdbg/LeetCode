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
    vector<int>b;
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        dfs(nums,0);
        return v;
    }
    void dfs(vector<int>&a,int i)
    {
        if(b.size()==a.size())
        {
            v.push_back(b);
            return ;
        }
        v.push_back(b);
        for(int j=i;j<a.size();j++)
        {
            if(j>i && a[j]==a[j-1])
                continue;
            b.push_back(a[j]);
            dfs(a,j+1);
            b.pop_back();
            
        }
    }
    
};