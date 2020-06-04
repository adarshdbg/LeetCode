static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n=s.size();
        int i=0,j=n-1;
        
        while(i<=j)
        {
            swap(s[i++],s[j--]);
        }
    }
};