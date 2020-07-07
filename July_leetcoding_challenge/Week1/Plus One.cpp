static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n=digits.size();
        vector<int>v(n+1);
        
        int p=1;
        for(int i=n-1;i>=0;i--)
        {
            v[i+1]=(digits[i]+p)%10;
            p=(digits[i]+p)/10;
        }
        if(p==1)
            v[0]=1;
        if(v[0])
            return v;
        else
            return {v.begin()+1,v.end()};
    }
};