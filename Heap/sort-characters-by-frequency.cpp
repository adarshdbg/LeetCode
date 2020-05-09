static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        for(char i:s)
            m[i]++;
        priority_queue<pair<int,char>>p;
            
        for(auto i:m)
            p.push({i.second,i.first});
        
        string s1="";
        while(!p.empty())
            s1+=string(p.top().first,p.top().second),p.pop();
        return s1;
    }
};