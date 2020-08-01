static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int>dp;
    int dfs(vector<int>&arr,int i,int d)
    {
        int res=1;
        if(dp[i])
            return dp[i];
        
        for(int j=i+1;j<=min(i+d,(int)arr.size()-1);j++)
        {
            if(arr[j]<arr[i])
                res=max(res,1+dfs(arr,j,d));
            else
                break;
        }
        for(int j=i-1;j>=max(i-d,0);j--)
        {
            if(arr[j]<arr[i])
                res=max(res,1+dfs(arr,j,d));
            else break;
        }
        return dp[i]=res;
    }
    int maxJumps(vector<int>& arr, int d) {
        dp.resize(arr.size());
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            ans=max(ans,dfs(arr,i,d));
        }   
        return ans;
    }
};