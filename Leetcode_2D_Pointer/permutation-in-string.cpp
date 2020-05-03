static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool ispermute(string &a,string &b)
    {
        int count[26]={0};
        for(int i = 0;i < a.length();i++){
            count[a[i]-'a']+=1;
        }
        for(int i = 0;i < b.length();i++){
            count[b[i]-'a']-=1;
        }
        for(int i = 0;i < 26;i++){
            if(count[i]!=0)
                return false;
        }
        return true;
        
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        int n=s1.size();
        int m=s2.size();
        for(int i=0;i<=m-n;i++)
        {
            string temp=s2.substr(i,n);
            if(ispermute(s1,temp))
                return true;
        }
        return false;
    }
};
