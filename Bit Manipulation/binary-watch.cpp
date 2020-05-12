static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> ans;
        for(int h=0; h<12; h++) {
            
           for(int m=0; m<60; m++) {
                
                // Number of set bits in hour portion and in minute
                // part has to be equal to num.
                if(__builtin_popcount(h) 
                                  + __builtin_popcount(m) == num) {
                    if(m<10)
                     ans.push_back(to_string(h) + ":0"+to_string(m));
                    else
                     ans.push_back(to_string(h) + ':' +to_string(m));   
                }
                
            }
            
        }
        return ans;
    }
};