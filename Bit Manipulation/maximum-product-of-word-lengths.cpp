static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<bitset<31>>v;
        
        for(int i=0;i<words.size();i++)
        {
            long long int ans=0;
            for(auto &j:words[i])
            {
                ans=(ans)|(1<<(j-'a'));
            }
            v.push_back(ans);
        }
    
    int ans=0;
    
    for(int i=0;i<words.size();i++)
    {
        for(int j=i+1;j<words.size();j++)
        {
            if((v[i]&v[j]) == 0)
            {
                int n=words[i].size();
                int m=words[j].size();
                ans=max(ans,n*m);
            }
        }
    }
    return ans;
    }
    
};