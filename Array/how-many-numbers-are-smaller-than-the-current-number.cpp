static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v((int)nums.size());
        vector<int>freq(101);
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        
        for(int i=1;i<freq.size();i++)
        {
            freq[i]+=freq[i-1];
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                v[i]=0;
            else
            v[i]+=freq[nums[i]-1];
        }
        return v;
        
    }
};