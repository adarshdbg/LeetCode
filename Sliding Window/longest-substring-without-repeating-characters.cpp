static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>m;
        int j=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
           m[s[i]]++;
            if(i-j+1 == m.size())
                ans=max(ans,i-j+1);
            else
            {
                while(i-j+1 != m.size())
                {
                    m[s[j++]]--;
                    if(m[s[j-1]]==0)
                        m.erase(s[j-1]);
                }
            }
        }
        return ans;
    }
};