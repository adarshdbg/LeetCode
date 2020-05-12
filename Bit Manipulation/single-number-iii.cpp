static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int a=0;
        for(auto i:nums)
            a^=i;
        
        a=a&(-a);

        int p=0,q=0;
        for(auto i:nums)
        {
            if(i&a)
                p^=i;
            else
                q^=i;
        }
        return {p,q};
    }
};