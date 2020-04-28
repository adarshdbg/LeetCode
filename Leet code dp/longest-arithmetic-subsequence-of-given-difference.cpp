static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int>m;
        int ans=1;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]=m[arr[i]-difference]+1;
            ans=max(ans,m[arr[i]]);
        }
        return ans;
    }
};