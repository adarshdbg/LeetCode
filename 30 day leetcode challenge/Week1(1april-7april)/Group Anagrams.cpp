static const auto _ = []() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    return 0;
}();
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<string>v(strs.begin(),strs.end());
        for(string& s:v)
        {
            sort(s.begin(),s.end());
        }
        unordered_map<string,vector<int>>m;
        for(string& s:v)
        {
            m[s].push_back(&s - & v[0]);
        }
        vector<vector<string>>v1;
       //auto it1=m.begin();
        
            
            for(auto &it:m)
            {
                vector<string>d;
                for(auto index:it.second)
                {
                d.push_back(strs[index]);
                }
                 v1.push_back(d);
                    d.clear();
            }
           
          
        
        return v1;
        
    }
};