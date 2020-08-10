static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int m = A.size(), n = A[0].length(), res = n - 1, k;
        vector<int>dp(n, 1);
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < j; ++i) {
                for (k = 0; k < m; ++k) {
                    if (A[k][i] > A[k][j]) break;
                }
                if (k == m && dp[i] + 1 > dp[j])
                    dp[j] = dp[i] + 1;
            }
            res = min(res, n - dp[j]);
        }
        return res;
 
    }
};