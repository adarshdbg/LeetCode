static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = index.size();
        vector<int> insertvector;
        for(int i=0;i<n;i++){
            insertvector.insert(insertvector.begin()+index[i],nums[i]);
        }
        return insertvector;
    }
};