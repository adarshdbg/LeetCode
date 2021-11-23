static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int countSubstrings(string s, string t) {
        
        int ans=0;
        
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<t.size();j++)
            {
                int equal=0;
                for(int k=0;i+k<s.size() && j+k<t.size();k++)
                {
                    if(s[i+k]!=t[j+k] && equal++==1)
                        break;
                    ans+=equal;
                }
            }
        }
        return ans;
    }
};