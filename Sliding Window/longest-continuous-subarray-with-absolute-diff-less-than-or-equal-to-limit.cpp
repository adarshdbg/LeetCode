static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n=nums.size();
        multiset<int>s;
        int i=0,j;
        for(j=0;j<n;j++)
        {
            s.insert(nums[j]);
            if(*s.rbegin() - *s.begin() > limit)
                s.erase(s.find(nums[i++]));
        }
        return j-i;
        
    }
};