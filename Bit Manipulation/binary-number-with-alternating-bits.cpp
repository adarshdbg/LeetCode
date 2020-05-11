static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool hasAlternatingBits(int n) {
        int d=n&1;
        while(d==(n&1))
        {
            d=1-d;
            n>>=1;
        }
        return n==0;
    }
};