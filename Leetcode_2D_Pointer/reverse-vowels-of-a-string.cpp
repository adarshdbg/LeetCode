static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j)
        {
            i=s.find_first_of("aeiouAEIOU",i);
            j=s.find_last_of("aeiouAEIOU",j);
            if(i<j)
                swap(s[i++],s[j--]);
        }
        return s;
    }
};