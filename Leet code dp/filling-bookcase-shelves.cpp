class Solution {
public:
    int minHeightShelves(vector<vector<int>>& b, int sw) {
        int len = b.size();
        vector<int> dp(len + 1, 0);
        
        for(int i = 1; i <= len; i++) {
            int h = b[i-1][1], w = b[i-1][0];
            dp[i] = dp[i-1] + h;
            for(int j = i-1; j >= 1 && w + b[j-1][0] <= sw; j--) {
                h = max(h, b[j-1][1]);
                w += b[j-1][0];
                dp[i] = min(dp[i], dp[j-1] + h);
            }
        }
        
        return dp[len];
    }
};