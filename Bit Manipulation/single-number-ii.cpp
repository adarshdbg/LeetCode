static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(32);
        for(int i=0;i<32;i++)
        {
            
            for(int j=0;j<nums.size();j++)
            {
               
                if(nums[j]&(1<<i))
                v[i]++;
                
            }
        }
        int ans=0;
        for(int i=0;i<32;i++)
        {
            if(v[i]%3==0)
                continue;
            else
            ans=ans + (1<<i);     
        }
        return ans;
    }
};