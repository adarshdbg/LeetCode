static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int minDifficulty(vector<int>& jobs, int d) { 
        int n = jobs.size();
        if (d > n) {
            return -1;
        }
        
        vector<vector<int>> cost(n, vector<int>(n, 0));
        for (int i = 0 ; i < n ; ++i) {
            cost[i][i] = jobs[i];
        }
        for (int l = 2 ; l <= n ; ++l) {
            for (int i = 0, j = i + l - 1 ; i <= n - l ; ++i, ++j) {
                cost[i][j] = max(cost[i][j - 1], jobs[j]);
            }
        }
        
        vector<vector<int>> dp(d, vector<int>(n, 0));
        for (int i = 0 ; i < n ; ++i) {
            dp[0][i] = cost[0][i];
        }
        
        for (int i = 1 ; i < d ; ++i) {
            for (int j = i ; j < n ; ++j) {
                int opt = INT_MAX;
                
                for (int k = i - 1 ; k < j ; ++k) {
                    int sum = dp[i - 1][k] + cost[k + 1][j];
                    opt = min(opt, sum);
                }
                
                dp[i][j] = opt;
            }
        }
        
        return dp[d - 1][n - 1];
    }
};