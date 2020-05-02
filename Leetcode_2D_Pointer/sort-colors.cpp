static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=0;
        while(j<nums.size())
        {
            if(nums[j]==0)
                swap(nums[i],nums[j]),i++,j++;
            else 
                j++;
        }
        i=nums.size()-1,j=nums.size()-1;
        while(j>=0)
        {
            if(nums[j]==2)
                swap(nums[i],nums[j]),i--,j--;
            else 
                j--;
        }
    }
};