static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        
        vector<int>::iterator itr=nums.begin();
        for (int i=0;i<groups.size();i++)
        {
            itr=search(itr,nums.end(),groups[i].begin(),groups[i].end());
            if (itr==nums.end())
                return false;
            else itr=itr+groups[i].size();
        }
        return true;
    }
};