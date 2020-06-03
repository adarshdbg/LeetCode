static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        
        int p=0,q=-5000000;
        for(auto &i:prices)
        {
            q=max(q,p-i-fee);//has one stock
            p=max(p,q+i);//has no stock
            
        }
        return p;
    }
};