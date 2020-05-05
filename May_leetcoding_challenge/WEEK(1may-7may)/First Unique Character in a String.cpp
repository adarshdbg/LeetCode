static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;

        for(auto &i:s)
            m[i]++;
        for(int i=0;i<s.size();i++)
            if(m[s[i]]==1)
                return i;
        return -1;
    }
};
