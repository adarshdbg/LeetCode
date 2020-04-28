class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& cost) {
        int dp[366+30]={0};
        int n=days.size();
        int p=days[n-1];
        //ans=0;
        int j=0;
        for(int i=31;i<=p+30;i++)
        {
            if(i-30 == days[j])
            {
            dp[i]=min(dp[i-1]+cost[0],min(dp[i-7]+cost[1],dp[i-30]+cost[2]));
            //ans+=
            //cout<<dp[i]<<" ";
                j++;
            }
            else
                dp[i]=dp[i-1];
            
        }
        return dp[p+30];
    }
};