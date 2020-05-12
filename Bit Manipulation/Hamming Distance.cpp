class Solution {
public:
    int hammingDistance(int x, int y) {
        int p;
        p=x^y;
        return __builtin_popcount(p);
    }
};