
static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    static inline bool compare1(int &a,int &b)
    {
        if(__builtin_popcount(a)==__builtin_popcount(b))
            return a<b;
        return __builtin_popcount(a)<__builtin_popcount(b);
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare1);
        return arr;
    }
};