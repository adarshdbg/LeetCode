static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
  
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int,int>m;
    for(auto u:A)
        for(auto v:B)
            m[u+v]++;
    
        int f=0;
    for(auto u:C)
        for(auto v:D)
        {
            auto it=m.find(0-u-v);
            if(it!=m.end())
                f+=it->second;
        }
    
    return f;
}
};