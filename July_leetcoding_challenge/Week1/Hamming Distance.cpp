static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32>a(x);
        bitset<32>b(y);
        int p=0;
        for(int i=0;i<32;i++)
        {
           p+=(a[i]!=b[i]);
        }
        return p;
    }
};