class Solution {
public:
    double new21Game(int N, int K, int W) {
        if (K == 0) return 1.0;
        vector<double> dp(K);
        auto total = 0.0;
        for (auto i = 0; i < K; ++i) {
            if (i < W) dp[i] = (total + min(N-K+1,W-i)) / W;
            else dp[i] = total / W, total -= dp[i-W];
            total += dp[i];
        }
        return dp[K-1];
    }
};