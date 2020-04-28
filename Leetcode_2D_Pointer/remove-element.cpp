static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0,j=0;
        for(j=0;j<n;j++)
        {
            if(nums[j]!=val)
                swap(nums[i],nums[j]),i++;
        }
        return i;
    }
        
};
    