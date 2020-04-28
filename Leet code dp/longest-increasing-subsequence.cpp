static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        vector<int> dp(n,1);
        
        for(int i=1;i<n;i++)
        {
            //int p=nums[i],count=0;
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            //ans=max(ans,count);  
        }
        for(int j=0;j<n;j++)
        {
            cout<<dp[j]<<" ";
        }
        return *max_element(dp.begin(),dp.end());
    }
};