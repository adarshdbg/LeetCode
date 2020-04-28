static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int ans=0;
        int n=seq.size();
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            if(seq[i]=='(')
                v[i]=ans++ % 2;
            else
                v[i]=++ans % 2;
        }
        return v;
    }
};