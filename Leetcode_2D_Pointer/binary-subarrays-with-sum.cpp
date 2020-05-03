static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int numSubarraysWithSum(vector<int>& A, int S) {
        unordered_map<int,int> mp;
        int psum = 0,res = 0;
         mp[0] = 1; 
        for(auto i : A){
            psum += i; 
            res += mp[psum-S];

            mp[psum]++;
        }
        // for(auto i : mp){
        //     cout<<i.first<<" "<<i.second<<" ";
        // }
        
        return res;
        
    }
};