static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int binary(vector<int>&v,int l,int r)
    {
        int mid=(l+r)/2;
        if(v[mid]>v[mid+1] && v[mid]>v[mid-1])
            return mid;
        else if(v[mid]>v[mid+1])
            return binary(v,l,mid);
        else if(v[mid]>v[mid-1])
            return binary(v,mid,r);
        else
            return {};
    }
    int peakIndexInMountainArray(vector<int>& A) {
        int ans=0;
        int n=A.size();
        
        for(int i=0;i<n;i++)
        {
            ans=binary(A,0,n-1);
        }
        return ans;
    }
};