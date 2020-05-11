
static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char a=0;
        for(auto i:s)
            a^=i;
        
        for(auto i:t)
            a^=i;
        
        
        return a;
    }
};