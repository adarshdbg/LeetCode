class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int>degree(n,0);
        unordered_map<int,set<int>>m;
        for(auto &i:roads)
        {
            m[i[0]].insert(i[1]);
            m[i[1]].insert(i[0]);
            degree[i[0]]++;
            degree[i[1]]++;
        }
       // sort(degree.begin(),degree.end(),greater<int>());
        // for(auto &i:degree)
        //     cout<<i<<" ";
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(m[i].find(j)!=m[i].end())
                    ans=max(ans,degree[i]+degree[j]-1);
                else
                    ans=max(ans,degree[i]+degree[j]);
                
                //cout<<ans<<" ";
            }
        }
        
        return ans;
    }
};