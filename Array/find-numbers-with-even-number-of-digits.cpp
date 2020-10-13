static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int ans=0;
        
        for(auto &i:nums)
        {
             if((i>=10 && i<=99) || (i>=1000 && i<=9999) || (i==100000))
                 ans++;
        }
        
        return ans;
    }
};