static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<string>v;
    
    void totalno(int n,int k,vector<char>&a,string s)
    {
        if(v.size()==k)return ;
        
        if(s.size()==n)
        {
            v.push_back(s);
            return;
        }
        for(int i=0;i<a.size();i++)
        {
            if(s.size()==0 || s.back()!=a[i])
            {
                s.push_back(a[i]);
                totalno(n,k,a,s);
                s.pop_back();
            }
        }
    }
    string getHappyString(int n, int k) {
        
        vector<char>a={'a','b','c'};
        string s="";
        totalno(n,k,a,s);
        if(v.size()==k)
            return v.back();
        else
            return {};
        
    }
};