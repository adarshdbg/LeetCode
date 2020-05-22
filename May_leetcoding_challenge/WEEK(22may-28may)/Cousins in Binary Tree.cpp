static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    string frequencySort(string s) {
        vector<int>v(100,0);
        int ans1=0;
        for(auto &i:s)
        {
            v[i-' ']++;
            ans1++;
        }
        string ans;
        
        while(ans1)
        {
            auto i=max_element(v.begin(),v.end());
            int p=i-v.begin();
            
            ans+=string(*i,' '+p);
            ans1=ans1 - *i;
            *i=0;
        }
        return ans;
        
    }
};