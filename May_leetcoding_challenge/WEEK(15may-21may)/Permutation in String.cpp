static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return {};
        
        vector<int>a(26,0);
        vector<int>b(26,0);
        for(int i=0;i<s1.size();i++)
        {
            a[s1[i]-'a']++;
            b[s2[i]-'a']++;
            //cout<<"1"<<" ";
        }
        if(a==b)
            return true;
        int i=s1.size();
        int n=s1.size();
        while(i<s2.size())
        {
            b[s2[i]-'a']++;
            b[s2[i-n]-'a']--;
            //cout<<i<<" "<<i-n<<" ";
            if(a==b)
                return true;
            i++;
            
        }
        return false;
        
        
    }
};