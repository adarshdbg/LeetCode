static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int dp[5001] = { 1 };
        for (auto c : coins)
            for (auto j = c; j <= amount; ++j) 
                dp[j] += dp[j - c];
        return dp[amount];
    }
};