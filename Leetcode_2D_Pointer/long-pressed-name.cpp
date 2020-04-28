static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n=name.size();
        int m=typed.size();
        int i=0,j=0;
        char c;
        while(i<n || j<m)
        {
            if(name[i]==typed[j])
               c=name[i],i++,j++;
            else if(typed[j]==c)
            {
                j++;
            }
            else
                return false;
        }
        return i==n;
    }
};