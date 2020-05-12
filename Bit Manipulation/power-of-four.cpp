static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num<=0)
            return false;
        int p=log2(num & -num) + 1;
        //cout<<p;
        return (p%2==1 && __builtin_popcount(num)==1);
    }
};