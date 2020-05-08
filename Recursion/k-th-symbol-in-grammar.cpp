static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int kthGrammar(int N, int k) {
        if(N==1)
            return 0;
        if(k%2==0)
           return kthGrammar(N-1,k/2)==0?1:0;
        else
           return kthGrammar(N-1,(k+1)/2)==0?0:1;
    }
};