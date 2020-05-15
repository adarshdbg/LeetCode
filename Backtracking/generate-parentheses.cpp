static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
     vector<string>ans;
    vector<string> generateParenthesis(int n) {
       string s="";
        int m=n;
        
        all(s,n,m);
        return ans;
    }
    void all(string s,int n,int m)
    {
        if(n==0 && m==0)
        {
            ans.push_back(s);
            return;
        }
        if(n==0)
        {
            all(s+')',n,m-1);
            
        }
        else if(n==m)
        {
            all(s+'(',n-1,m);
        }
        else
        {
           all(s+'(',n-1,m);
           all(s+')',n,m-1);
        }
    }
};