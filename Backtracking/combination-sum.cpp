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
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        all(a,candidates,target,0);
        return v;
    }
    void all(vector<int>&a,vector<int>&c,int n,int j)
    {
    
        if(accumulate(a.begin(),a.end(),0)>=n)
        {
            if(accumulate(a.begin(),a.end(),0)==n)
            v.push_back(a);
            return;
        }
        
        for(int i=j;i<c.size();i++)
        {
            a.push_back(c[i]);
            all(a,c,n,i);
            a.pop_back();
            
        }
    }
};