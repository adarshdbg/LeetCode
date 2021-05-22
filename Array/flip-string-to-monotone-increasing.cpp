static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n=s.size();
        vector<int>no_of_zero(n,0);
        vector<int>no_of_ones(n,0);
        
        for(int i=0;i<n;i++)
            no_of_zero[i]=i==0?s[i]-'0':s[i]=='0'?no_of_zero[i-1]:no_of_zero[i-1]+1;
        
        for(int i=n-1;i>=0;i--)
            no_of_ones[i]=i==n-1?1-(s[i]-'0'):s[i]=='1'?no_of_ones[i+1]:no_of_ones[i+1]+1;
         int ans=n;
        for(int i=0;i<n;i++)
        {
            ans=min(ans,no_of_zero[i]+no_of_ones[i]-1);
        }
        return ans;
    }
};