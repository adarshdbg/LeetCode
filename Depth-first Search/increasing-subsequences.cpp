static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<vector<int>>ans;
    vector<int>a;
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        
        
        dfs(a,0,nums.size(),nums);
        return ans;
    }
    void dfs(vector<int>&a,int j,int n,vector<int>&nums)
    {
        if(a.size()>=2)
        {
            ans.push_back(a);
        }
        unordered_set<int> hash;
        for(int i=j;i<n;i++)
        { 
            if((a.empty() || nums[i] >= a.back()) && hash.find(nums[i]) == hash.end())
            {
                a.push_back(nums[i]);
                dfs(a,i+1,n,nums);
                a.pop_back();
                hash.insert(nums[i]);
            }
        }
    }
};