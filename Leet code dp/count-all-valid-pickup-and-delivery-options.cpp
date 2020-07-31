static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int countOrders(int n) {
       long res=1,mod=1e9+7;
        
        for(int i=1;i<=n;i++)
        {
            res=res*(i*2 - 1)*i %mod;
        }
        return res%mod;
    }
};