static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;
        for(int &i:left)
            ans=max(ans,i);
        for(int &i:right)
            ans=max(ans,n-i);
        
        return ans;
    }
};