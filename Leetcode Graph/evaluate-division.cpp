
class Solution {
public:
    unordered_map<string,vector<pair<string,double>>>m;
    pair<bool,double> search(string f,string l,unordered_set<string>v,double val)
    {
        if(v.count(f)==0)
        {
            v.insert(f);
            for(auto p:m[f])
            {
                double temp=val * p.second;
                if(p.first==l)
                    return make_pair(true,temp);
                
                auto result=search(p.first,l,v,temp);
                if(result.first)
                    return result;
            }
        }
        return make_pair(false,-1.0);
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double>ans;
        for(int i=0;i<equations.size();i++)
        {
            m[equations[i][0]].push_back(make_pair(equations[i][1],values[i]));
            m[equations[i][1]].push_back(make_pair(equations[i][0],1.0/values[i]));
            
        }
        for(auto q:queries)
        {
            unordered_set<string>v;
            if(q[0]==q[1] && m.count(q[0]))
                ans.push_back(1.0);
            else
                ans.push_back(search(q[0],q[1],v,1.0).second);
        }
        return ans;
    }
    
};