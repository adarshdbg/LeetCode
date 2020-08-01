static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();

class Solution {
public:
    vector<int>dp;
    
    int helper(vector<int>&a,int i)
    {
        if(i>=a.size())
            return 0;
        if(dp[i]!=INT_MIN)
            return dp[i];
        else
        {
            int ans=INT_MIN;
            ans=max(ans,a[i]-helper(a,i+1));
            if(i+1<a.size())
            {
                ans=max(ans,a[i]+a[i+1]-helper(a,i+2));
            }
            if(i+2<a.size())
            {
                ans=max(ans,a[i]+a[i+1]+a[i+2]-helper(a,i+3));
            }
            dp[i]=ans;           
        }
        return dp[i];
    }
    string stoneGameIII(vector<int>& stoneValue) {
        dp.resize((int)stoneValue.size(),INT_MIN);
        
        int ans=helper(stoneValue,0);
        if(ans==0)
            return "Tie";
        if(ans<0)
            return "Bob";
        else
            return "Alice";
    }
};