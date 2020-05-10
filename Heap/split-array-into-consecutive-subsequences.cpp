static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int>m;
        unordered_map<int,int>n;
        for(auto i:nums)
            m[i]++;
        
        for(auto i:nums)
        {
            if(m[i]==0)
                continue;
            m[i]--;
             if(n[i-1]>0)
            {
                n[i-1]--;
                n[i]++;
            }
            else if(m[i+1]>0 && m[i+2]>0)
            {
                m[i+1]--;
                m[i+2]--;
                n[i+2]++;
            }
            else 
                return false;
        }
        return true;
    }
};