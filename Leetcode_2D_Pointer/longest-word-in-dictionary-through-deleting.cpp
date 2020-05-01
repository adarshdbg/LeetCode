static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(),d.end());
        string ans="";
        for(int i=0;i<d.size();i++)
        {
            int l=0,j=s.size(),k=0;
            while(l<j)
            {
                if(s[l]==d[i][k])
                    k++;    
                l++;
            }
            ans= k==d[i].size() && k>ans.size()?d[i]:ans;
        }
        return ans;
    }
};