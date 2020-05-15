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
    vector<vector<int>> combinationSum3(int k, int n) {
        
        all(a,k,n,1);
        return v;
    }
    void all(vector<int>&a,int k,int n,int j)
    {
        if(a.size()==k)
        {
            if(accumulate(a.begin(),a.end(),0)==n)
            v.push_back(a);
            return;
        }
        
        for(int i=j;i<=9;i++)
        {
            a.push_back(i);
            all(a,k,n,i+1);
            a.pop_back();
            
        }
    }
};