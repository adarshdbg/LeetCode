static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        
        
        sort(satisfaction.begin(),satisfaction.end());
        int p=0;
        for(auto i:satisfaction)
            if(i>=0)
                p++;
        
        
        int ans=0,q=0,j=0;
        for(int i=satisfaction.size()-1;i>=0;i--)
        {
            if(satisfaction[i]>=0)
            {
                ans+=(p*satisfaction[i]);
                p--;
                q+=satisfaction[i];
                j=i;
            }
        }
        
        int s=ans;
        for(int i=j-1;i>=0;i--)
        {
            ans=max(ans,s+q+satisfaction[i]);
            s=s+q+satisfaction[i];
            q=q+satisfaction[i];
            //cout<<ans<<" ";
        }
        
        return ans;
        
    }
};