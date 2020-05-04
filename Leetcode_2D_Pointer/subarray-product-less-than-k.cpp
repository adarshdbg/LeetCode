static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       //int n=nums.size();
        if(k<=1)
            return 0;
        int i=0,j=0,n=nums.size();
        int p=1,ans=0;
        while(j<n)
        {
            p=p*nums[j];
            while(p>=k)
                p/=nums[i++];
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
};