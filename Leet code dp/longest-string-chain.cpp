static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    static inline bool mp(string &a,string &b)
    {
        return a.size()<b.size();
    }
    int longestStrChain(vector<string>& words) {
        
        sort(words.begin(),words.end(),mp);
        vector<string>a;
        a=words;
        int n=words.size();
        vector<int>dp(n,1);
        for(int i=0;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(a[j].size()+1 == a[i].size())
                {
                    int y=0,z=0;
                    for(int l=0;l<a[i].size();l++)
                    {
                        if(a[i][l]==a[j][z])
                            y++,z++;
                    }
                    if(y==a[j].size())
                    {
                         dp[i]=max(dp[i],dp[j]+1);
                        //break;
                    }
                 }
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};