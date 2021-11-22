static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex+1);
        
        for(int i=0;i<=rowIndex;i++)
        {
            ans[i]=1;
            for(int j=i-1;j>0;j--)
            {
                ans[j]+=ans[j-1];
            }
        }
        
        return ans;
        
    }
};