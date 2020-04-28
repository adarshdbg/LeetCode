static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pr(n);
        vector<int>su(n);
        
        pr[0]=nums[0];
        su[0]=nums[n-1];
        for(int i=1;i<nums.size();i++)
        {
            pr[i]=pr[i-1]*nums[i];
            
        }
        for(int i=1;i<nums.size();i++)
        {
            su[i]=su[i-1]*nums[n-i-1];
            
        }
        
        for(int i=1;i<nums.size()-1;i++)
        {
            nums[i]=pr[i-1]*su[n-i-2];
        }
        nums[0]=su[n-2];
        nums[nums.size()-1]=pr[nums.size()-2];
        
        return nums;
        
    }
};