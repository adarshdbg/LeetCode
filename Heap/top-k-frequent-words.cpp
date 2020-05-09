static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    static bool cmp(pair<string,int>&a,pair<string,int>&b)
    {
        if(a.second==b.second)
            return a.first<b.first;
        else
           return a.second > b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        priority_queue<pair<int,string>>q;
        for(auto i:words)
        {
            m[i]++;
            
        }
        vector<pair<string,int>>ans;
         for(auto i=m.begin();i!=m.end();i++)
        {
            ans.push_back({i->first,i->second});  
        }
        
       
        
        sort(ans.begin(),ans.end(),cmp);
        vector<string>v;
        int j=0;
        for(auto i:ans)
        {
            if(j<k)
            {
            v.push_back(i.first);
                j++;
            }
        }
        return v;
    }
};