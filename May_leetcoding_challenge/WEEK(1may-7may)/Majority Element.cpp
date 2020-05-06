static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        return major1(nums,0,nums.size()-1);
    }
    int major1(vector<int>&a,int l,int r)
    {
        
        if(l==r)
            return a[l];
        if(l<r)
        {
        int mid=l + (r-l)/2;
        int m=major1(a,l,mid);
        int n=major1(a,mid+1,r);
        return count(a.begin()+l,a.begin()+mid+1,m) > count(a.begin()+mid+1,a.begin()+r+1,n)?m:n;
        }
        return {};
    }
};