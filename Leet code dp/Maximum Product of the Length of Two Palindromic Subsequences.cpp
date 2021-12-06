static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool checkpalindrome(string s)
    {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j)
        {
            if(s[i++]==s[j--])
                continue;
            else
                return false;
        }
        
        return true;
        
    }
    void dfs(string &s, string &s1,string &s2,int &ans,int i)
    {
        if(i==s.size() && checkpalindrome(s1) && checkpalindrome(s2))
        {
            ans=max(ans,(int)s1.size()*(int)s2.size());
        }
        if(i<s.size())
        {
            s1=s1+s[i];
            dfs(s,s1,s2,ans,i+1);
            s1.pop_back();
            s2=s2+s[i];
            dfs(s,s1,s2,ans,i+1);
            s2.pop_back();
            dfs(s,s1,s2,ans,i+1);
        }
        
    }
    int maxProduct(string s) {
        string s1="",s2="";
        int ans=0,i=0;
        dfs(s,s1,s2,ans,i);
        return ans;
    }
};