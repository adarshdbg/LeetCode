static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(m==0 || n==0)
            return 0;
        else if(m==n)
            return m;
        else
        {
            int l=log2(m);
            int r=log2(n);
            long int ans=m;
            if(l==r)
            {
               for(long int i=m;i<=n;i++)
                   ans=ans&i;
                
                return ans;
            }
            else
                return 0;
        }
    }
};