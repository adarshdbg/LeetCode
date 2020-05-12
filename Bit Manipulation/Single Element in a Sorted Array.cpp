static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r)
        {
            
            
             if(l==r)
                return nums[l];
            int mid=l +(r-l)/2;
            
            if(mid%2==0)
            {
                if(nums[mid]==nums[mid+1])
                    l=mid+2;
                else
                    r=mid;
            }
            else
            {
                if(nums[mid]==nums[mid-1])
                    l=mid+1;
                else
                    r=mid-1;
            }
        }
        return {};
    }
};