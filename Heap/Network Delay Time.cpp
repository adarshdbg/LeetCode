static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int k) {
       vector<vector<pair<int,int>>>v1(N+1);
        for(auto i:times)
        {
            v1[i[0]].push_back(make_pair(i[1],i[2]));
        }
        vector<int>v(N+1,1e+9);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        
        v[k]=0;
        p.push(make_pair(k,0));
        while(!p.empty())
        {
            pair<int,int>u=p.top();
            p.pop();
            for(auto &i:v1[u.first])
            {
                //cout<<p.top().first<<" ";
                if(i.second + v[u.first] < v[i.first])
                {
                    v[i.first]=i.second + v[u.first];
                    p.push(make_pair(i.first,v[i.first]));
                }
                
            }
            
        }
        // cout<<endl;
        // for(int i=1;i<v.size();i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        int m=*max_element(v.begin()+1,v.end());
        cout<<m<<endl;
        return m == 1e+9 ? -1: m;
        
    }
};