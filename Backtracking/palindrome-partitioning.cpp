static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<vector<string>>ans;
    vector<string>palindrome;
    vector<vector<string>> partition(string s) {
        string p;
        dfs(s,0);
        return ans;
    }
    void dfs(string &s,int i)
    {
        if(i == s.size()) {
            ans.push_back(palindrome);
            return;
        }
        for(int j = i;j < s.size(); ++j) {
            if(isPalindrome(s, i, j)) {
                palindrome.push_back(s.substr(i, j - i + 1));
                dfs(s, j+1);
                palindrome.pop_back();
            }
        }
    }
     bool isPalindrome(const string& s, int start, int end) {
        while(start <= end) {
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }
};