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
    vector<int>v;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<bool>a(nums.size(),false);
        dfs(nums,a,0);
        return ans;
    }
    void dfs(vector<int>&nums,vector<bool>&a,int i)
    {
        if(v.size()==a.size())
        {
            ans.push_back(v);
            return ;
        }
        for(int j=0;j<nums.size();j++)
        {
            
            
            if(!a[j])
            {
                if(j>0 && nums[j]==nums[j-1] && !a[j-1])
                   continue;
                v.push_back(nums[j]);
                a[j]=true;
                dfs(nums,a,i+1);
                a[j]=false;
                v.pop_back();
            }
        }
    }
};