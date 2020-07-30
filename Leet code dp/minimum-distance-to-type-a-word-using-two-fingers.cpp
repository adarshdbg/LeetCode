static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int dis(char x,char y){
        int a=x-'A'; int b=y-'A';
        return abs(a/6-b/6)+abs(a%6-b%6);
    }
    
    int minimumDistance(string word) {
        int dp[310][310];
        memset(dp,0x3f,sizeof dp);
        dp[0][0]=0; dp[0][1]=0;
        for(int i=1;i<=word.size();i++){
            dp[0][i+1]=min(dp[0][i+1],dp[0][i]+dis(word[i-1],word[i]));
            dp[i][i+1]=min(dp[i][i+1],dp[0][i]);
        }
        for(int i=1;i<=word.size();i++){
            for(int j=i+1;j<=word.size();j++){
                dp[j][j+1]=min(dp[j][j+1],dp[i][j]+dis(word[i-1],word[j]));
                dp[i][j+1]=min(dp[i][j+1],dp[i][j]+dis(word[j-1],word[j]));
            }
        }
        int res=0x3f3f3f3f;
        for(int i=0;i<=word.size();i++){
            res=min(res,dp[i][word.size()]);
        }
        return res;
    }
};