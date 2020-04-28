/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */
static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int binary(BinaryMatrix &binaryMatrix,int i,int l,int r,int s)
    {
        if(l<=r)
        {
            int mid=l + (r - l) / 2;
            int g=binaryMatrix.get(i, mid);
            if(g == s)
                return min(mid,binary(binaryMatrix,i,l,mid-1, s));
            if(g<s)
                return binary(binaryMatrix,i,mid+1,r, s);            
        }
        return INT_MAX;
    }
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int ans=INT_MAX;
        vector<int> p=binaryMatrix.dimensions();
        int n=p[0];
        int m=p[1];
        for(int i=0;i<n;i++)
        {
           ans=min(ans, binary(binaryMatrix,i,0,m-1,1));
        }
        return ans==INT_MAX?-1:ans;
    }
};