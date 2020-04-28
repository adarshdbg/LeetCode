static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1,p=-1;
        while(l<=r)
        {
             int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                p=mid;
                break;
            }
            else if(nums[mid]>target)
                r=mid-1,p=mid;
            else
                l=mid+1,p=mid;
        }
        if(nums[p]==target)
            return p;
        else if(r == nums.size()-1)
            return nums.size();
        else if(l == 0)
            return 0;
        else
        {
            if(nums[l]<target)
                return l+1;
            else
                return l;
        }
            
        
    }
};