static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int longestDecomposition(string text) {
        
        int ans=0;
        int n=text.size();
        int i=0,j=n-1;
        string l="",r="";
        while(i<n)
        {
           l=l+text[i++];
           r=text[j--]+r;
            
            if(l==r)
                ans++,l="",r="";
        }
        
        return ans;
    }
};