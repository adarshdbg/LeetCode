class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1,-1);
        dp[0]=1;
        
        return sum(nums,target,dp);
    }
    int sum(vector<int> &nums,int target,vector<int>&dp)
    {
        if(dp[target]!=-1)
            return dp[target];
        int sol=0;
        for(int i=0;i<nums.size();i++)
        {
            if(target>=nums[i])
            {
                sol+=sum(nums,target-nums[i],dp);
            }
        }
        dp[target]=sol;
        return sol;
    }
};