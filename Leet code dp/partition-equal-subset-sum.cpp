static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0,i,j;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if(sum%2==1)
            return false;
        bool dp[sum / 2 + 1][n + 1];  
    for (i = 0; i <= n; i++)  
    dp[0][i] = true; 
    for (i = 1; i <= sum / 2; i++)  
    dp[i][0] = false;  
     
    for (i = 1; i <= sum / 2; i++)  
    {  
        for (j = 1; j <= n; j++)  
        {  
            dp[i][j] = dp[i][j - 1];  
            if (i >= nums[j - 1])  
            dp[i][j] = dp[i][j] ||  
                         dp[i - nums[j - 1]][j - 1];  
        }      
    }  
      
    
    return dp[sum / 2][n];  
    }
};