static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        vector<int>v(amount+1,amount+1);
        v[0]=0;
        for(int i=0;i<=amount;i++)
        {
            for(int j=0;j<coins.size();j++)
            {
                if(coins[j]<=i)
                {
                    v[i]=min(v[i],v[i-coins[j]]+1);
                }
            }
        }
        return v[amount]==amount+1?-1:v[amount];
    }
};