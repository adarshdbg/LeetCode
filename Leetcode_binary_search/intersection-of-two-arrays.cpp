static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        unordered_set<int> s;
        for(auto& n1:nums1)
            m[n1]++;
        for(auto& n2:nums2){
            if(m[n2] != 0)
                s.insert(n2);
        }
        vector<int> res(s.begin(),s.end());
        return res;
    }
};