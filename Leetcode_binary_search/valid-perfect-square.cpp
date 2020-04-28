static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long long int i=1;;i++)
        {
            if(i*i==num)
                return true;
            else if(i*i>num)
                return false;
        }
    }
};