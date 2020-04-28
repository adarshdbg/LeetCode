static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<vector<pair<int,int>>>v;
    vector<vector<int>>ans;
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        
        v.resize(n);
        ans.resize(n);
        for(auto i:edges)
        {
            v[i[0]].push_back(make_pair(i[1],i[2]));
            v[i[1]].push_back(make_pair(i[0],i[2]));
        }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<v[i].size();j++)
        //         cout<<"<"<<v[i][j].first<<","<<v[i][j].second<<">";
        //     cout<<endl;
        // }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        for(int i=0;i<n;i++)
        {
            //cout<<i<<" ";
            vector<int>d(n,1e+9);
            d[i]=0;
            p.push(make_pair(i,0));
            //cout<<p.top().first<<" ";
            while(!p.empty())
            {
                auto u=p.top();
                p.pop();
                for(auto j:v[u.first])
                {
                  if(d[u.first] + j.second < d[j.first])   
                  {
                     d[j.first]= d[u.first] + j.second;
                     
                     p.push(make_pair(j.first,d[j.first]));
                  }
                }
                
            }
            for(int j=0;j<n;j++)
            {
                if(d[j]<=distanceThreshold && j!=i)
                {
                    ans[i].push_back(j);
                }
            }
        }
        int m=1e+9,s=0;
        for(int i=0;i<n;i++)
        {
           if(m>=ans[i].size())
           {
               m=ans[i].size();
               s=i;
           }
        }
        return s;
        
    }
};