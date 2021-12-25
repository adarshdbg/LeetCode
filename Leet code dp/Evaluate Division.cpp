class Solution {
public:
    unordered_map<string,vector<pair<string,double>>>m;
    pair<bool,double> dfs(string s, string &t, double value,unordered_set<string>&vis)
    {
        if(vis.find(s)==vis.end())
        {
            vis.insert(s);
            for(auto &j:m[s])
            {
                double temp=value*j.second;
                if(j.first==t)
                    return {true,temp};
                
                auto p=dfs(j.first,t,temp,vis);
                if(p.first)
                    return p;
            }
        }
        return {false,-1.0};
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        for(int i=0;i<equations.size();i++)
        {
            m[equations[i][0]].push_back({equations[i][1],values[i]});
            m[equations[i][1]].push_back({equations[i][0],1.0/values[i]});
        }
        vector<double>ans;
        for(auto &i:queries)
        {
            string s=i[0];
            string t=i[1];
            double value=1.0;
            unordered_set<string>vis;
            if(i[0]==i[1] && m.count(i[0]))
                ans.push_back(1.0);
            else
                ans.push_back(dfs(s,t,value,vis).second);
        }
        
        return ans;
        
    }
};