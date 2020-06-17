static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        if(wordDict.size()==0)
            return false;
        
        unordered_map<string,int>m;
        for(auto i:wordDict)
            m[i]++;
        
        vector<bool>dp(s.size()+1,false);
        dp[0]=true;
        for(int i=1;i<=s.size();i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(dp[j])
                {
                    string p=s.substr(j,i-j);
                    if(m.find(p)!=m.end())
                    {
                        dp[i]=true;
                        break;
                    }
                    
                }
                
            }
        }
        return dp[s.size()];
    }
};