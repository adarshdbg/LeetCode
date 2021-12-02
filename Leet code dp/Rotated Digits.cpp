static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int rotatedDigits(int n) {
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            string s=to_string(i);
            string p="";
            for(auto &j:s)
            {
                if(j=='2' || j=='5' || j=='6' || j=='9')
                {
                    if(j=='2')
                        p+='5';
                    if(j=='5')
                        p+='2';
                    if(j=='6')
                        p+='9';
                    if(j=='9')
                        p+='6';
                } 
                else if(j=='0' || j=='1' || j=='8')
                {
                    p+=j;
                }
                else
                {
                    //cout<<j<<" ";
                    p="";
                    break;
                }
            }
            if(p.size()>0 && p!=s)
                ans++;
        }
        
        return ans;
    }
};