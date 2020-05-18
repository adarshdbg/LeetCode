static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size();
       int ans=0;
        for(int i=0;i<=31;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(nums[j]&(1<<i))
                    count++;
            }
            ans=ans+ count*(n-count);
        }
        return ans;
    }
};