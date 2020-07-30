static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int numOfWays(int n) {
        
        long int p=6,q=6;
        long int l,r,mod=1e9 + 7;
        
        for(int i=1;i<n;i++)
        {
            l=p*3 + q*2;
            r=l-p;
            
            p=l%mod;
            q=r%mod;
            
        }
        
        return (p+q)%mod;
    }
};