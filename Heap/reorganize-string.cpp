static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    string reorganizeString(string S) {
        map<char,int>m;
        for(auto i:S)
            m[i]++;
        priority_queue<pair<int,char>>p;
        
        for(auto i:m)
            p.push({i.second,i.first});
        
        string s="";
        
        while(p.size()>1)
        {
            auto i=p.top();
            p.pop();
            auto j=p.top();
            p.pop();
            s=s+i.second+j.second;
            i.first--;
            j.first--;
            if(i.first>0)
                p.push(i);
            if(j.first>0)
                p.push(j);
            
            
        }
        if(!p.empty())
        {
            if(p.top().first>1)
                return "";
            else
                s+=p.top().second,p.pop();
        }
        return s;
            
    }
};