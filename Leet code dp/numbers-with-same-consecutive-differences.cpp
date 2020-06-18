static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int>ans;
    void dfs(int l,int n,int k)
    {
        if(n==0)
        {
            ans.push_back(l);
        }
        else
        {
            int m=l%10;
            
            if(m+k < 10)
                dfs(l*10 + k + m,n-1,k);
            if(k!=0 && m-k>=0)
                dfs(l*10 +m-k,n-1,k);
        }
    }
    vector<int> numsSameConsecDiff(int N, int K) {
        if(N==1)
            return{0,1,2,3,4,5,6,7,8,9};
        
        
        
        for(int i=1;i<=9;i++)
        {
            dfs(i,N-1,K);
        }
        return ans;
    }
};