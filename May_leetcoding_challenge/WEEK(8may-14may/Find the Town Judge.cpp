static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int>v(N+1,0);
        vector<int>v1(N+1,0);
        for(auto &i:trust)
            v[i[0]]++,v1[i[1]]++;
        
        
        
        for(int i=1;i<=N;i++)
            if(v[i]==0 && v1[i]==N-1)
                return i;
        
        return -1;
    }
};