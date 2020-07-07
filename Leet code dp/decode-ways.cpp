static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int dynamic(string& s, unordered_map<string, int>& m, int n){
        if(n<0)
            return 0;
        if(n==0)
            return 1;
        if(n==1){
            if(s[n-1]-'0')
                return 1;
            return 0;
        }
        if(m.count(s.substr(n)))
            return m[s.substr(n)];
        int ans=0, a=s[n-2]-'0', b=s[n-1]-'0';
        if(a){
            if(a*10+b<=26 && a*10+b>=1)
                if(b)
                    ans=dynamic(s, m, n-1)+dynamic(s, m, n-2);
                else 
                    ans=dynamic(s, m, n-2);
            else
                if(b)
                    ans=dynamic(s, m, n-1);
        }
        else{
            if(b)
                ans=dynamic(s, m, n-1);
        }
        m[s.substr(n)]=ans;
        return ans;
    }
    
    int numDecodings(string s) {
        unordered_map<string, int> m={};
        if(!s.size())
            return 0;
        return dynamic(s, m, s.size());
    }
};