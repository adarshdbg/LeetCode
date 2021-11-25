static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        
        vector<int>incr(n),decr(n);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(rating[i]<rating[j])
                    incr[i]++;
                else
                    decr[i]++;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(rating[i]<rating[j])
                    ans+=incr[j];
                else
                    ans+=decr[j];
            }
        }
        return ans;
    }
};