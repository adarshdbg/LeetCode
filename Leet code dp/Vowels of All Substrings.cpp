static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    long long countVowels(string word) {
        long ans=0;
        string s="aeiou";
        for(int i=0;i<word.size();i++)
        {
            if(s.find(word[i])!= string::npos)
                ans+=(i+1)*(word.size()-i);
        }
        
        return ans;
    }
};