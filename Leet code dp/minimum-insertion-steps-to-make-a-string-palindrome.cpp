static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<vector<int>> memo;
    int minInsertions(string s) {
        if(s.size()==0 || s.size()==1)
            return 0;
        memo.resize(s.length(),vector<int>(s.length(),-1));
        return baba(s,0,s.size()-1);
    }
    int baba(string &s,int l,int r)
    {
        if(l>=r)
            return 0;
        if(memo[l][r]!=-1)
            return memo[l][r];
        
        if(s[l]==s[r])
            return memo[l][r]=baba(s,l+1,r-1);
        
        return memo[l][r]=min(1+baba(s,l+1,r),1+baba(s,l,r-1));
    }
};