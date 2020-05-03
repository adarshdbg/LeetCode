static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
       
        for(auto &i:magazine)
        {
            m[i]++;
            
        }
        for(auto &i:ransomNote)
        {
            m[i]--;
            
        }
        for(auto &i:m)
        {
            if(i.second<0)
                return false;
            
        }
        return true;
    }
};