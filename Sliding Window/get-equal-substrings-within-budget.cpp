static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int equalSubstring(string s, string t, int k) {
        int n=s.size();
        int i = 0, j;
        for (j = 0; j < n; ++j) {
            if ((k -= abs(s[j] - t[j])) < 0)
                k += abs(s[i] - t[i++]);
        }
        return j - i;
    }
};