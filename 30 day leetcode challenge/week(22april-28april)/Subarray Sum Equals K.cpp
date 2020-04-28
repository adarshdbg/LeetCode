static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int ans=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k)
                ans++;
            if(m.find(sum-k)!=m.end())
                ans=ans+m[sum-k];
            
            m[sum]++;
        }
        return ans;
    }
};