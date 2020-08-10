static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<unordered_set<int>>v;
    vector<int>res,sum;
    
    vector<int> sumOfDistancesInTree(int N, vector<vector<int>>& edges) {
        
        v.resize(N);
        res.resize(N,0);
        sum.resize(N,1);
        for(auto i:edges)
        {
            v[i[0]].insert(i[1]);
            v[i[1]].insert(i[0]);
        }
        
        dfs(0,-1);
        dfs2(0,-1);
        
        return res;
    }
    
    void dfs(int i,int j)
    {
        for(auto& k:v[i])
        {
            if(k==j)
                continue;
            dfs(k,i);
            sum[i]+=sum[k];
            res[i]+=res[k]+sum[k];
            
        }
    }
    void dfs2(int i,int j)
    {
        for(auto &k:v[i])
        {
            if(k==j)
                continue;
            res[k]=res[i]-sum[k]+sum.size()-sum[k];
            dfs2(k,i);
            
        }
    }
};