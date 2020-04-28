static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        v=nums;
        for(int i=1;i<n;i++)
        {
            nums[i]=nums[i]+nums[i-1];
            //cout<<nums[i]<<" ";
        }
        
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int p=nums[i]+s-v[i];
            auto it=lower_bound(nums.begin(),nums.end(),p);
            int j=it - nums.begin();
         
            if(j<n)
            ans=min(ans, j-i);
            
            
        }
        return ans==INT_MAX?0:ans+1;
    }
};