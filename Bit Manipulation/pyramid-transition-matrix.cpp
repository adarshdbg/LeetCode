static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    unordered_map<string,unordered_set<char>>m;
    bool pyramid(string bottom,string above)
    {
        int a=bottom.size();
        int b=above.size();
        if(a==2 && b==1)
            return true;
        
        if(a-1==b)
            return pyramid(above,"");
        
        string k=bottom.substr(b,2);
        if(m.count(k))
        {
            for(auto i:m[k])
            {
                if(pyramid(bottom,above+i))
                    return true;
            }
        }
        return false;
        
    }
    
    bool pyramidTransition(string bottom, vector<string>& allowed) {
        string s;
        int n=bottom.size();
        for(auto i:allowed)
            m[i.substr(0,2)].insert(i[2]);
        return pyramid(bottom,"");
    }
};