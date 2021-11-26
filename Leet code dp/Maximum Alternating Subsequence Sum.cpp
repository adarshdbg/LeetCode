static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long ans=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            ans+=max(nums[i]-nums[i-1],0);
        }
        
        return ans;
    }
};