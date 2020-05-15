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
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       sort(candidates.begin(),candidates.end());
        dfs(a,candidates,target,0);
        return v;
    }
    void dfs(vector<int>&a,vector<int>&c,int n,int j)
    {
    
        if(accumulate(a.begin(),a.end(),0)>=n)
        {
            if(accumulate(a.begin(),a.end(),0)==n)
            v.push_back(a);
            return;
        }
        
        for(int i=j;i<c.size();i++)
        {
            if(i && c[i]==c[i-1] && i>j) continue;
            a.push_back(c[i]);
            dfs(a,c,n,i+1);
            a.pop_back();
            
        }
    }
};