static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>v;
        
        for(int i=0;i<nums.size();i+=2)
        {
            while(nums[i]--)
            {
                v.push_back(nums[i+1]);
            }
        }
        
        return v;
    }
};