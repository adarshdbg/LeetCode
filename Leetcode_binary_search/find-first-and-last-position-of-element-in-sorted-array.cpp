static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0)
        return {-1,-1};
        
        int l=0,r=n-1;
        while(l<r)
        {
            int mid=(l+r)>>1;
            if(nums[mid]>=target)
                r=mid;
            else
                l=mid+1;
        }
        if(nums[r]==target)
        {
        auto it=upper_bound(nums.begin(),nums.end(),target);
        int t=it-nums.begin();
        return {r,t-1};
        }
        else
            return {-1,-1};
    }
};