/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int guessNumber(int n) {
        long int p=LONG_MAX;
        long int l=1,r=n;
        while(1)
        {
            int mid=(l+r)/2;
            if(guess(mid)==-1)
                r=mid-1;
            if(guess(mid)==1)
                l=mid+1;
            if(guess(mid)==0)
            {
                p=mid;
                break;
            }
        }
        return p;
    }
};