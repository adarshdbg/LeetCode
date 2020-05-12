static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
       return __builtin_popcount(n)==1;
    }
};