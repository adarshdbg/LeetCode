static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    //Best Explanation
    //https://massivealgorithms.blogspot.com/2019/06/leetcode-1040-moving-stones-until.html
    vector<int> numMovesStonesII(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        int n=stones.size();
        int h=max(stones[n-2]-stones[0]-1-(n-3),stones[n-1]-stones[1]-1-(n-3));
        int i=0,low=n;
        for (int j = 0; j < n; ++j) {
            while (stones[j] - stones[i] >= n) ++i;
            if (j - i + 1 == n - 1 && stones[j] - stones[i] == n - 2)
                low = min(low, 2);
            else
                low = min(low, n - (j - i + 1));
        }
        return {low,h};
    }
};