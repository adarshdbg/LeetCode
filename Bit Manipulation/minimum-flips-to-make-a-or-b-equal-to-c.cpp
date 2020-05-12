static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int minFlips(int a, int b, int c) {
        long int ans=0;
        int t=10;
        while(c!=0 || a!=0 || b!=0)
        {
            int  u=a&1;
            int  v=b&1;
            int  w=c&1;
            a/=2;
            b/=2;
            c/=2;
            //out<<a;
            if(w!= (u|v))
            {
                ans+=((u&v)+1);
            }
        }
        return ans;
    }
};