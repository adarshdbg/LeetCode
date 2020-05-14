static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    void letter(string s,vector<string>&ans,int i)
    {
        if(i==s.size())
            return ans.push_back(s);
        letter(s,ans,i+1);
        if(isalpha(s[i]))
        {
            if('a'<=s[i] && s[i]<='z')
            s[i]=s[i]-(1<<5);
            else 
              s[i]=s[i]+(1<<5);  
            letter(s,ans,i+1);
        }
        
        
    }
    vector<string> letterCasePermutation(string S) {
        vector<string>ans;
        letter(S,ans,0);
        return ans;
    }
};