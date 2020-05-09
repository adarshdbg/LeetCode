static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
    #define ll long long int
public:
    bool isPerfectSquare(int num) {
        
        for(ll i=1;i*i<=num;i++)
        {
            if(i*i == num)
                return true;
        }
        return false;
    }
};