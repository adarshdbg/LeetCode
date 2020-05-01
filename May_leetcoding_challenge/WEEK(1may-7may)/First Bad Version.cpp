// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int firstBadVersion(int n) {
        int i=1;
        int j=n;
        while(i<=j)
        {
            int mid=i+ (j-i)/2;
            if(!isBadVersion(mid))
                i=mid+1;
            else
                j=mid-1;
        }
        return i;
    }
};