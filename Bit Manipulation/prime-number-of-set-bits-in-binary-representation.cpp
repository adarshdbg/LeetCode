static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
  int countPrimeSetBits(int L, int R) {
    int ans = 0;
    unsigned magic_no = 2693408941;// 1<<2 + 1<<3 + 1<<5 + 1<<7 + 1<<11 + ..... + 1<<31;
    for (int n = L; n <= R; ++n)
      if (magic_no & (1 << __builtin_popcountll(n))) 
          ++ans;
      
    return ans;
  }
};