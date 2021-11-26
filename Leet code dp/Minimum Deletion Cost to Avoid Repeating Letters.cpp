static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int minCost(string s, vector<int>& cost) {
       int ans=0;
        
        int n=s.size(),max_v=cost[0],sum=cost[0];
        char c=s[0];
        if(n==2 && s[0]==s[1])
            return min(cost[0],cost[1]);
        for(int i=1;i<n;i++)
        {
            if(s[i]==c)
            {
                max_v=max(max_v,cost[i]);
                sum+=cost[i];
                
            }
            else
            {
                c=s[i];
                sum-=max_v;
                ans+=sum;
                sum=cost[i];
                max_v=cost[i];
            }
           // cout<<"{"<<sum<<" "<<ans<<"}";
        }
        sum-=max_v;
        ans+=sum;
        return ans;
           
    }
};