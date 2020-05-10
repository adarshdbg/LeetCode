static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        priority_queue<pair<int,int>>p;
        map<int,int>m;
        for(auto i:barcodes)
            m[i]++;
        for(auto i:m)
            p.push({i.second,i.first});
        
        vector<int>v;
        while(p.size()>1)
        {
            auto i=p.top();
            p.pop();
            auto j=p.top();
            p.pop();
            
            v.push_back(i.second);
            v.push_back(j.second);
            i.first--;
            j.first--;
            if(i.first>0)
                p.push(i);
            if(j.first>0)
                p.push(j);
            
        }
        if(p.size()==1)
        {
            v.push_back(p.top().second);
            return v;
        }
        return v;
    }
};