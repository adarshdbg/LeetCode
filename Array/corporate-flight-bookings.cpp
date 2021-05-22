static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>ans(n);
        
        for(vector<int> &i:bookings)
        {
            ans[i[0]-1]+=i[2];
            if(i[1]!=n)
                ans[i[1]]-=i[2];
        }
        for(int i=1;i<n;i++)
            ans[i]+=ans[i-1];
        return ans;
        
    }
};