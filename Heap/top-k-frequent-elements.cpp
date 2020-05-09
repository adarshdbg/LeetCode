static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        priority_queue<pair<int,int>>p;
        map<int,int>m;
        for(int i:nums)
            m[i]++;
        
        for(auto i:m)
            p.push({i.second,i.first});
                   
        while(!p.empty())
        {
             v.push_back(p.top().second);
            p.pop();
        }
        return {v.begin(),v.begin()+k};
        
        
    }
};