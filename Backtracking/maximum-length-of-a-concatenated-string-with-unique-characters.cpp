static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maxLength(vector<string>& arr) {
        vector<bitset<26>>a= {bitset<26>()};
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            bitset<26>b;
            for(auto j:arr[i])
                b[j-'a']=1;
            
            int p=b.count();
            if(p<arr[i].size())
                continue;
            
            for(int j=a.size()-1;j>=0;j--)
            {
               // bitset t=a[j]
                if((a[j]&b).any())
                    continue;
                
                a.push_back(a[j]|b);
                ans=max(ans,(int)((a.back()).count()));
            }
        }
        return ans;
    }
};