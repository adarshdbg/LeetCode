static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char>s;
        for(auto &i:J)
            s.insert(i);
        int p=0;
        for(auto &i:S)
            if(s.find(i)!=s.end())
                p++;
        
        return p;
    }
};