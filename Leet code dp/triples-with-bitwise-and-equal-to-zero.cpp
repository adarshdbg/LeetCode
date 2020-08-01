static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int countTriplets(vector<int>& A) {
        int cnt=0;
       int tuples[1 << 16] = {};
        for (auto a : A)
            for (auto b : A) 
                ++tuples[a & b];
        for (auto a : A)
            for (auto i = 0; i < (1 << 16); ++i)
            if ((i & a) == 0) 
                cnt += tuples[i];
         return cnt;  
    }
};