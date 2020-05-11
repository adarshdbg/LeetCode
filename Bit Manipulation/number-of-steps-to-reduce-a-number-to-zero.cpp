static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int numberOfSteps (int num) {
        return num!=0?__builtin_popcount(num)+31-__builtin_clz(num):0;
    }
};