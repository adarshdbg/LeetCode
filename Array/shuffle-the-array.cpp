static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m=nums.size();
        
        
        for(int i=0;i<n;i++)
        {
            nums[i]<<=11;
            nums[i]=nums[i]|nums[i+n];
        }
        
        for(int i=n-1,j=m-1;i>=0;i--,j-=2)
        {
            nums[j]=nums[i]&(2047);
            nums[j-1]=nums[i]>>11;
        }
        return nums;
    }
};