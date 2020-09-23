vector<pair<int,int>>p;
int find(int i)
{
    if(p[i].first!=i)
    p[i].first=find(p[i].first);
    
    return p[i].first;
}
void make_union(int i,int j)
{
    int x=find(i);
    int y=find(j);
    
    if(p[x].second<p[y].second)
    p[x].first=y;
    else if(p[x].second>p[y].second)
    p[y].first=x;
    else
    {
        p[y].first=x;
        p[x].second++;
    }
}
int spanningTree(int V, int E, vector<vector<int>> &graph) {
    // code here
    vector<pair<int,pair<int,int>>>v;
    vector<pair<int,pair<int,int>>>result(V);
    for(int i=0;i<graph.size();i++)
    {
        for(int j=0;j<graph[0].size();j++)
        {
            if(graph[i][j]!=INT_MAX)
            {
                v.push_back({graph[i][j],{i,j}});
            }
        }
    }
    
    sort(v.begin(),v.end());
    p.clear();
    p.resize(V);
    
    for(int i=0;i<V;i++)
    p[i]={i,0};
    
    int e=0,i=0,ans=0;
    while(e<V && i<E)
    {
        auto g=v[i++];
        
        int x=find(g.second.first);
        int y=find(g.second.second);
        
        if(x!=y)
        {
            
            result[e++]=g;
            make_union(x,y);
        }
        
        
    }
    
    for(auto k:result)
    {
        //cout<<"{"<<k.first<<","<<k.second.first<<","<<k.second.second<<"}";
        ans+=k.first;
    }
    return ans;
    
}