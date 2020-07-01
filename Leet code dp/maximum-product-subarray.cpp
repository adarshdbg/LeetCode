static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int r=nums[0];
        int l,ans;
        l=r,ans=r;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
                swap(l,r);
            
            l=max(nums[i],l*nums[i]);
                
            r=min(nums[i],nums[i]*r);
            
            ans=max(ans,l);
        }
        return ans;
        
    }
};