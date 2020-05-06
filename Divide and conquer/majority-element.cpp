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
        int n=nums.size();
        return major1(nums , 0 , n - 1);
    }
    int major1(vector<int>&a , int l , int r)
    {
        if(l==r)
            return a[l];
        int mid=l + (r-l)/2;
        int m=major1(a,l,mid);
        int n=major1(a,mid+1,r);
        if(m==n)
            return m;
        
        return count(a.begin()+l,a.begin()+r+1,m)>count(a.begin()+l,a.begin()+r+1,n)?m:n;
    }
};