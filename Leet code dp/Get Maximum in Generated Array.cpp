static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>v(n+1);
        if(n<2)
            return n;
        v[0]=0;
        v[1]=1;
        int ans=0;
        for(int i=2;i<=n;i++)
        {
            v[i]=i%2?v[i/2]+v[i/2 + 1]:v[i/2];
            ans=max(ans,v[i]);
        }
        return ans;
    }
};