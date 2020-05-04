static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
    #include <iostream>
#include <string>
public:
    int findComplement(int num) {
        int copy = num;
        int i = 0;

        while(copy != 0) {
            copy >>= 1;
            num ^= (1<<i);
            i += 1;
        }
        return num;
    }
};